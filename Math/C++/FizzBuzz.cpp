// Fizzbuzz is one of the most basic problems in the coding interview world. Try to write a small and elegant code for this problem. 

// Given a positive integer A, return an array of strings with all the integers from 1 to N.
// But for multiples of 3 the array should have “Fizz” instead of the number.
// For the multiples of 5, the array should have “Buzz” instead of the number.
// For numbers which are multiple of 3 and 5 both, the array should have “FizzBuzz” instead of the number.

// Look at the example for more details.

// Example

// A = 5
// Return: [1 2 Fizz 4 Buzz]




vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    for(int i=1; i<=A;i++){ //loop will go from 1 to the length of array
        if((i%3==0) && (i%5==0)) //condition to check whether it is divisible by both 3 and 5
        v.push_back("FizzBuzz"); //if condition is true then fizzbuzz is pushed back
        else if(i%3==0) //for above condition is false then divisibility by 3 is checked
        v.push_back("Fizz"); //if true then Fizz is pushed back
        else if(i%5==0)//for above condition is false then divisibility by 5 is checked
        v.push_back("Buzz"); //if this is true then Buzz is pushed back
        else{  //if not any of the above condition is true then i is converted from integer to  string and pushed back
            string str = to_string(i);
            v.push_back(str);
        }
        
    }
    return v; //the final output is returned after the loop gets terminated
}
