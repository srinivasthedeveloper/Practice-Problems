// https://leetcode.com/problems/intersection-of-two-arrays-ii/

/*
Problem Statement - Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

*/


// code 

import java.util.*;;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        
        int n = nums1.length;
        int m = nums2.length;
        
        ArrayList<Integer>list=new ArrayList<Integer>();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i]==nums2[j]){
                    list.add(nums2[j]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        
        int[] ans = new int[list.size()];
        
        for(int i=0; i<ans.length; i++){
            ans[i] = list.get(i);
        }
        
        return ans;
        
    }
}