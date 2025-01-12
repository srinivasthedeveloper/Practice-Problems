// https://leetcode.com/problems/search-a-2d-matrix/

/*
 
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

1) Integers in each row are sorted from left to right.
2) The first integer of each row is greater than the last integer of the previous row.

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

 */


// code

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int row = 0;
        int col = matrix[0].length-1;

        while(row<matrix.length && col>=0){
            if(matrix[row][col] == target){
                return true;
            }
            if(matrix[row][col]<target){
                row++;
            }
            else{
                col--;
            }
        }
        return false;
        
    }
}
