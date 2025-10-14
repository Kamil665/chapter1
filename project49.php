<?php

echo "=== ВЫЧИСЛЕНИЕ ПЛОЩАДИ ТРАПЕЦИЙ ===\n";
echo "Введите основание 1: ";
$osn1 = trim(fgets(STDIN));
echo "Введите основание 2: ";
$osn2 = trim(fgets(STDIN));
echo "Угол при большем основании: ";
$a = trim(fgets(STDIN));

$d = sqrt(abs(($osn1 + $osn2) * ($osn1 - $osn2)));

$S = abs(($d * $d * sin($a)) / 2);

echo "Площадь равнобедренной трапеции: ". $S;

?>
