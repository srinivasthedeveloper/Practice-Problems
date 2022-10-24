// Problem link: https://leetcode.com/problems/pascals-triangle/

/* Problem Statement: 
   Given an integer numRows, return the first numRows of Pascal's triangle.In Pascal's triangle, each number is the sum of the two numbers directly
   
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
*/

class Solution {
    public List<List<Integer>> generate(int numRows) {
        var res = new ArrayList<List<Integer>>();
        if (numRows > 0) res.add(Collections.singletonList(1));

        for (int i = 2; i <= numRows; i++) {
            var list = new ArrayList<Integer>(i);
            list.add(1);
            for (int j = 1; j < i - 1; j++) {
                var prevRow = res.get(i - 2);
                list.add(prevRow.get(j - 1) + prevRow.get(j));
            }            
            list.add(1);
            res.add(list);
        }
        
        return res;
    }
}
