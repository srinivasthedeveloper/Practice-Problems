<?php

/**
 * Problem description
 * 
 * If you have an array that you would like to output without looping over it, eg. names or cars, you can use the implode() method.
 * Implode() splits the items in the array up, and has a seperator, which is user defined, as the first parameter.
 * 
 */

$myArray = [
    'BMW',
    'Audi',
    'Mercedes',
    'Toyota',
    'Porsche'
];

$implodedString = implode(', ', $myArray); // splits array up into a string, where each element is split by ", ".

echo $implodedString; // returns: "BMW, Audi, Mercedes, Toyota, Porsche"
