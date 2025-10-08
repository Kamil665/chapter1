<?php

echo "a = ";
$a = (int)fgets(STDIN);

echo "b = ";
$b = (int)fgets(STDIN);

echo "\n";

$plus = $a + $b;
$minus = $a - $b;
$multiplication = $a * $b;
$division = $a / $b;

echo "a + b = ". $plus. "\n";
echo "a - b = ". $minus. "\n";
echo "a * b = ". $multiplication. "\n";
echo "a / b = ". $division;

?>
