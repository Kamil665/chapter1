<?php

class Point {
    public $x;
    public $y;
    
    public function __construct($x, $y) {
        $this->x = (float)$x;
        $this->y = (float)$y;
    }
    
    public function __toString() {
        return "({$this->x}, {$this->y})";
    }
}

class GeometryCalculator {
    public static function distance(Point $p1, Point $p2): float {
        return sqrt(pow($p2->x - $p1->x, 2) + pow($p2->y - $p1->y, 2));
    }
    
    public static function triangleArea(Point $a, Point $b, Point $c): float {
        return abs(
            ($a->x * ($b->y - $c->y) +
            $b->x * ($c->y - $a->y) +
            $c->x * ($a->y - $b->y)) / 2
            );
    }
    
    public static function isConvexQuadrilateral(Point $p1, Point $p2, Point $p3, Point $p4): bool {
        $cross1 = self::crossProduct($p1, $p2, $p3);
        $cross2 = self::crossProduct($p2, $p3, $p4);
        $cross3 = self::crossProduct($p3, $p4, $p1);
        $cross4 = self::crossProduct($p4, $p1, $p2);
        
        return ($cross1 >= 0 && $cross2 >= 0 && $cross3 >= 0 && $cross4 >= 0) ||
               ($cross1 <= 0 && $cross2 <= 0 && $cross3 <= 0 && $cross4 <= 0);
    }
    
    private static function crossProduct(Point $a, Point $b, Point $c): float {
        return ($b->x - $a->x) * ($c->y - $a->y) - ($b->y - $a->y) * ($c->x - $a->x);
    }
    
    public static function quadrilateralArea(Point $p1, Point $p2, Point $p3, Point $p4): float {
        $area1 = self::triangleArea($p1, $p2, $p3);
        $area2 = self::triangleArea($p1, $p3, $p4);
        
        return $area1 + $area2;
    }
}

class QuadrilateralProcessor {
    private $points = [];
    
    public function __construct($points) {
        if (count($points) !== 4) {
            throw new InvalidArgumentException("Четырёхугольник должен иметь 4 вершины");
        }
        $this->points = $points;
    }
    
    public function calculateArea(): array {
        $result = [
            'success' => false,
            'area' => 0,
            'method1_area' => 0,
            'method2_area' => 0,
            'triangles_area1' => [],
            'triangles_area2' => [],
            'is_convex' => false,
            'message' => ''
        ];
        
        try {
            $isConvex = GeometryCalculator::isConvexQuadrilateral(
                $this->points[0], $this->points[1], $this->points[2], $this->points[3]
            );
            
            $result['is_convex'] = $isConvex;
            
            if (!$isConvex) {
                $result['message'] = "Внимание: четырёхугольник не является выпуклым. Результат может быть неккоректным.";
            }
            
            $triangle1_area1 = GeometryCalculator::triangleArea(
                $this->points[0], $this->points[1], $this->points[2]
            );
            
            $triangle2_area1 = GeometryCalculator::triangleArea(
                $this->points[0], $this->points[2], $this->points[3]
            );
            $method1_area = $triangle1_area1 + $triangle2_area1;
            
            $triangle1_area2 = GeometryCalculator::triangleArea(
                $this->points[0], $this->points[1], $this->points[3]
            );
            
            $triangle2_area2 = GeometryCalculator::triangleArea(
                $this->points[1], $this->points[2], $this->points[3]
            );
            $method2_area = $triangle1_area2 + $triangle2_area2;
            
            $difference = abs($method1_area - $method2_area);
            $is_consistent = $difference < 0.0001;
            
            $result['success'] = true;
            $result['area'] = $method1_area;
            $result['method1_area'] = $method1_area;
            $result['method2_area'] = $method2_area;
            $result['triangles_area1'] = [
                'triangle1' => $triangle1_area1,
                'triangle2' => $triangle2_area1
            ];
            $result['triangles_area2'] = [
                'triangle1' => $triangle1_area2,
                'triangle2' => $triangle2_area2
            ];
            $result['is_consistent'] = $is_consistent;
            
            if ($is_consistent && $isConvex) {
                $result['message'] = "Предупреждение: методы дают разные результаты для выпуклого четырёхугольника";
            }
        } catch (Exception $e) {
            $result['message'] = "Ошибка при вычислении: ". $e->getMessage();
        }
        return $result;
    }
    
    public function generateReport(): string {
        $calculation = $this->calculateArea();
        
        $report = "=== РАСЧЁТ ПЛОЩАДИ ВЫПУКЛОГО ЧЕТЫРЁХУГОЛЬНИКА ===\n\n";
        
        $report .= "Координаты вершин:\n";
        foreach ($this->points as $i => $point) {
            $report .= "  Вершина " . ($i + 1) . ": {$point}\n";
        }
        
        $report .= "\nПроверка выпуклости: " .
                  ($calculation['is_convex'] ? "ВЫПУКЛЫЙ" : "НЕВЫПУКЛЫЙ") . "\n";
                  
        if ($calculation['message']) {
            $report .= "Сообщение: {$calculation['message']}\n";
        }
        
        $report .= "\n--- Метод 1 (разбиение по диагонали 1-3) ---\n";
        $report .= sprintf(" Треугольник 1-2-3: %.4f\n", $calculation['triangles_area1']['triangle1']);
        $report .= sprintf(" Треугольник 1-3-4: %.4f\n", $calculation['triangles_area1']['triangle2']);
        $report .= sprintf(" Сумма площадей: %.4f\n", $calculation['method1_area']);
        
        $report .= "\n--- Метод 2 (разбиение по диагонали 2-4) ---\n";
        $report .= sprintf(" Треугольник 1-2-4: %.4f\n", $calculation['triangles_area2']['triangle1']);
        $report .= sprintf(" Треугольник 2-3-4: %.4f\n", $calculation['triangles_area2']['triangle2']);
        $report .= sprintf(" Сумма площадей: %.4f\n", $calculation['method2_area']);
        
        $report .= "\n--- РЕЗУЛЬТАТ ---\n";
        $report .= sprintf(" Площадь четырёхугольника: %.4f\n", $calculation['area']);
        $report .= " Согласованность методов: " .
                  ($calculation['is_consistent'] ? "ДА" : "НЕТ") . "\n";
                  
        return $report;
    }
}

try {
    $points = [
        new Point(0, 0),
        new Point(4, 0),
        new Point(3, 3),
        new Point(1, 4)
    ];
    
    $processor = new QuadrilateralProcessor($points);
    echo $processor->generateReport();
    
} catch (Exception $e) {
    echo "Ошибка: " . $e->getMessage() . "\n";
}

?>
