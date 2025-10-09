<?php

echo "=== ВЫЧИСЛЕНИЕ РАССТОЯНИЯ МЕЖДУ ТОЧКАМИ ===\n";

echo "Введите координату x1: ";
$x1 = (int)trim(fgets(STDIN));

echo "Введите координату y1: ";
$y1 = (int)trim(fgets(STDIN));

echo "\n";

echo "Введите координату x2: ";
$x2 = (int)trim(fgets(STDIN));

echo "Введите координату y2: ";
$y2 = (int)trim(fgets(STDIN));

echo "\n";

$distance = sqrt(pow(($x2 - $x1), 2) + pow(($y2 - $y1), 2));

echo "Результат\n";
echo "Точка 1: ($x1, $y1)\n";
echo "Точка 2: ($x2, $y2)\n";
echo "Расстояние = ". $distance. "\n";

?>
