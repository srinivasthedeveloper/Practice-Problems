/* 
Problem Statement :
Program to check whether a given string is a palindrome or not.
A string is said to be palindrome if the reverse of the string is the same as the string.


Output: 

Enter the String: refer

Palindrome

Enter the String: Apple

Not a Palindrome

*/





import java.util.Scanner;

public class Palindrome {

    public static boolean isPalindrome(String str){

        String rstr="";
        int last=str.length()-1;
        boolean ans=false;

        for(int i=last;i>=0;i--){
            rstr=rstr+str.charAt(i);
        }
        // Checking if both the STRINGS are equal
        if(str.equals(rstr)){
            ans=true;
        }
        return ans;
    } 

    public static void main(String[] args) {
        
    
        Scanner read=new Scanner(System.in);
        System.out.print("Enter the String: ");
        String word=read.nextLine();

        //Checking palindrome
        boolean result=isPalindrome(word);

        if(result){
            System.out.print("\nPalindrome\n");
        }
        else{
            System.out.print("\nNot a Palindrome\n");
        }
        read.close();
    }
}
