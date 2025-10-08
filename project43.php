<?php

function arifmaticMean($a, $b) {
    return ($a + $b) / 2;
}

function geometricMean($a, $b) {
    return sqrt($a * $b);
}

echo "Введите первое число: ";
$firstNumber = (float)fgets(STDIN);

echo "Введите второе число: ";
$secondNumber = (float)fgets(STDIN);

$number1 = abs($firstNumber);
$number2 = abs($secondNumber);

$ariphmetic = arifmaticMean($number1, $number2);
$geometric = geometricMean($number1, $number2);

echo "Среднее арифметическое = ". $ariphmetic. "\n";
echo "Среднее геометрическое = ". $geometric;

?>
