//Given an array of integers, find the nearest smaller number for every element such that the smaller number is on the left side
//For ex - n = 8, arr[] = [4, 10, 5, 8, 20, 15, 3 12]    Output -> -1, 4, 4, 5, 8, 8, -1, 3
//if there is no smaller element then print -1
import java.util.*;
public class prevSmallerElement {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();                                   //length of array
        int arr[] = new int[n];
        for(int i =0; i<n; i++){                            //taking input values
            arr[i]= sc.nextInt();
        }
        smallerNumberUsingStack(arr, n);                   //calling function
    }
    static void smallerNumberUsingStack(int[] arr, int n){      //function to print smaller elements on the left side of an array
        Stack<Integer> s = new Stack<>();                       //create an empty stack
        for(int i =0; i<n; i++){                                //traversing array
            while(!s.empty() && s.peek() >= arr[i]){             //removing the top element of the stack if it is greater than or equal to arr[i]
                s.pop();
            }
            if(s.empty()){                              //if all the elements are greater than arr[i], print -1
                System.out.print("-1, ");
            }else{                                      //else print nearest smaller element
                System.out.print(s.peek() + ", ");
            }
            s.push(arr[i]);                            //now push this element into stack
        }
    }
}

//Time Complexity -> O(n)
