<?php

/**
 * Problem description
 * 
 * If an API or anything else returns a string with something like "Info:" in front, you might
 * want to get rid of the "Info" to see the message itself when handling the request.
 * 
 * This can be done with the substr() method, where you can define a starting position for the string.
 */

$myString = 'Info: php is the greatest!';
substr($myString, 6); // Returns a string where "Info: " is removed. "p" in "php" is at index 6, hence why the parameter supplied is 6.

echo $myString; // returns: "php is the greatest!"
