<?php

/**
 * Problem description
 * 
 * If you have a string that is decided by the user eg. form sent to PHP file, then that user could've added whitespaces to the string.
 * This isn't ideal if you'd like to add it to the database, therefore you can trim the whitespaces from the string.
 */

$stringToTrim = '          php is         cool          !';
$result = trim($stringToTrim); // trims whitespaces from the string

echo $result; // returns: "php is cool !"
