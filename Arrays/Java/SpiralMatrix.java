// https://leetcode.com/problems/spiral-matrix/

// problem statement - Given an m x n matrix, return all elements of the matrix in spiral order.

// input - matrix = [[1,2,3],[4,5,6],[7,8,9]]
// output - [1,2,3,6,9,8,7,4,5]

// spiral matrix

import java.util.*;
public class SpiralMatrix{
    public static void main(String[] args) {
        int[][] arr = {{1,2,3},{4,5,6},{7,8,9}};
        System.out.println(spiralOrder(arr));
    }
    static List<Integer> spiralOrder(int[][] matrix) {
        ArrayList<Integer> list = new ArrayList<>();
        int top = 0;
        int left = 0;
        int down = matrix.length - 1;
        int right = matrix[0].length - 1;

        if (matrix.length == 0){
            return list;
        }    
        while (top <= down && left <= right) {
            for (int j = left; j <= right; j++)
                list.add(matrix[top][j]);
            top++;
            for (int i = top; i <= down; i++)
                list.add(matrix[i][right]);
            right--;
            if (top <= down) {
                for (int j = right; j >= left; j--)
                    list.add(matrix[down][j]);
                down--;
            }
            if (left <= right) {
                for (int i = down; i >= top; i--)
                    list.add(matrix[i][left]);
                left++;
            }
        }
        return list;
    }
}
