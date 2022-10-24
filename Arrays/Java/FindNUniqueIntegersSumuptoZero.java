//LEETCODE PROBLEM-https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

//PROBLEM STATEMENT-Given an integer n, return any array containing n unique integers such that they add up to 0.

//INPUT-3
//OUTPUT -   0 1 -1

//CODE-

import java.util*;
public class Demo {
    

    static int [] sumZero(int n) {
        int[] arr = new int [n];
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                arr[i]=i+1;
                arr[i+1]=-arr[i];
            }
        }else{
            arr[0]=0;
            for(int i=1;i<n;i+=2){
                arr[i]=i;
                arr[i+1]=-i;
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n =input.nextInt();

        // int[][] matrix ={ { 8, 2, 13, 4 },
        //                 { 9, 16, 17, 8 },
        //                 { 1, 22, 3, 14 },
        //                 { 15, 6, 17, 8 } };

        int result[]=sumZero(n);
        System.out.println("elements are - ");
        for(int i=0;i<result.length;i++){
            System.out.println(result[i]);
        }
    }
}
