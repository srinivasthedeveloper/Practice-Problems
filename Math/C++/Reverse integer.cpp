// Problem Description

// You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer


// Look at the example for clarification.



// Problem Constraints
// N belongs to the Integer limits.



// Input Format
// Input an Integer.



// Output Format
// Return a single integer denoting the reverse of the given integer.



// Example Input
// Input 1:

//  x = 123


// Input 2:

//  x = -123


// Example Output
// Output 1:

//  321


// Ouput 2:

//  -321


// Example Explanation
//  If the given integer is negative like -123 the output is also negative -321.



int Solution::reverse(int A) {
   int negflag=0;
if(A<0) //for negative integers this condition is checked
{
negflag=1; 
A = A*-1;
}
long int ret=0;
while(A!=0) //for positive integers and zero this condition is checked
{
ret = ret*10 + A%10; 
A = A/10;
if(ret<INT_MIN || ret>INT_MAX) 
{
ret=0;
break;
}
}
if(negflag==1) ret = ret*-1;

return ret;
}
