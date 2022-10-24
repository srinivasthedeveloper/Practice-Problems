/* 
Problem Statement: 
Write a java program to multiply two matrix

Output: 
Matrix1 : 
Enter the No. of ROWS: 3
Enter the No. of COLUMNS: 3
Matrix2 :
Enter the No. of ROWS: 3
Enter the No. of COLUMNS: 2
Matrix 1:
Enter the Matrix Element:
3 1 0
1 0 2
0 1 1
Matrix 2:
Enter the Matrix Element:
2 1
0 1
2 1

Matrix 1 :
3 1 0
1 0 2
0 1 1
Matrix 2 :
2 1
0 1
2 1
Product is:
6 4 
6 3
2 2
*/

import java.util.Scanner;

public class Multiplication{

    public static void readmatrix(int arr[][],int r,int c){

        Scanner read=new Scanner(System.in);
        System.out.println("Enter the Matrix Element: ");

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=read.nextInt();
            }
        }
        
    }

    public static void printmatrix(int arr[][],int r,int c){

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }

    public static void multiply(int a[][],int r1,int c1,int b[][],int r2,int c2,int arr[][]) {
        
        for(int i=0;i<r1;i++){
            for(int j=0; j<c2;j++){
                arr[i][j]=0;
                for(int k=0;k<r2;k++){
                    arr[i][j]=arr[i][j]+a[i][k]*b[k][j];
                }
            }
        
        }
        
    }

    public static void main(String[] args) {
        
        Scanner read=new Scanner(System.in);

        int r1,r2,c1,c2;
        System.out.print("Matrix1 : \n");

        System.out.print("Enter the No. of ROWS: ");
        r1=read.nextInt();
        System.out.print("Enter the No. of COLUMNS: ");
        c1=read.nextInt();


        System.out.print("Matrix2 : \n");
        System.out.print("Enter the No. of ROWS: ");
        r2=read.nextInt();
        System.out.print("Enter the No. of COLUMNS: ");
        c2=read.nextInt();


        if(c1!=r2){
            System.out.print("!!Multiplication Not Possible!!\n");
            return;
        }

        int a[][]=new int[10][10], b[][]=new int[10][10],c[][]=new int[10][10];
        System.out.println("Matrix 1:");
        readmatrix(a, r1, c1);
        System.out.println("Matrix 2: ");
        readmatrix(b, r2, c2);
        System.out.println();
        System.out.println("Matrix 1 :");
        printmatrix(a, r1, c1);
        System.out.println("Matrix 2 :");
        printmatrix(b, r2, c2);

        System.out.println("Product is: ");
        multiply(a, r1, c1, b, r2, c2, c);
        printmatrix(c, r1, c2);

        
    }
}
