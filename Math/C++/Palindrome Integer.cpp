// Problem Description
 
 

// Determine whether an integer is a palindrome. Do this without extra space.

// A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic.

// Example :

// Input : 12121
// Output : 1


// Input : 123
// Output : 0



int Solution::isPalindrome(int A) {
    
    int rev,sum=0; //rev and sum are first intialized with 0
    int temp = A; //temp contains the integer
    
    while(A>0){ //loop is executed till the given integer is non-zero
       rev=A%10; //rev is updated to store the remainder
        A=A/10; //the integer is now updated to store the value left after division
       sum=sum*10+rev; //sum is updated to get the reverse of the number 
     
       
    }
    
    return temp==sum;
    
     
}
