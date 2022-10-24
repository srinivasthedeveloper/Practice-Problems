/*
PROBLEM STATEMENT :
Chef has a binary string SS of length NN.

In one operation, Chef can:

Select two indices i and j (1≤i,j≤N,i=j) and flip Si and Sj (i.e. change 00 to 11 and 11 to 00)
For example, if S = 10010 and chef applys operation on i = 1 and j = 3 then: 10010→00110.
Find if it is possible to convert SS to a palindrome by applying the above operation any (possibly zero) number of times.

Note: A string is called a palindrome if it reads the same backwards and forwards, for e.g. 1000110001 and 01100110 are palindromic strings.
Explanation:
Test case 1: We can perform the following operation:

Select i = 3 and j = 5 .Then 101011→100001, which is a palindrome.
Test case 2: We can perform the following operations:

Select i = 4 and j = 5.Then 1110000→1111100
Select i = 6 and j = 7.Then 1111100 →1111111, which is a palindrome.
*/
//Here is my code for the Palindrome Flipping problem in java .
import java.util.*;
import java.lang.*;
import java.io.*;

public class Palindrome_Flipping {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try{
		    Scanner sc = new Scanner(System.in);
		    int T,N,i,j,m,n;
		    T=sc.nextInt();
		    for(i=0;i<T;i++){
		        N=sc.nextInt();
		        String S=sc.next();
		        m=0;
		        n=0;
		        for( j=0;j<N;j++){
		           if(S.charAt(j)=='1')
		           m++;
		           else
		           n++;
		        }
		        if((N%2==0)&&(m%2==0)&&(n%2==0))
		        System.out.println("YES");
		        else if((N%2==0)&&((m%2!=0)||(n%2!=0)))
		        System.out.println("NO");
		        else if(N%2!=0)
		        System.out.println("YES");
		    }
		}
		catch(Exception e){
		    
		}
	} 
}
/*
INPUT
3
6
101011
2
01
7
1110000
OUTPUT
YES
NO
YES
*/
