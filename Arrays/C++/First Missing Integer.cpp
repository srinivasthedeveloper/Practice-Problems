// Given an unsorted integer array, find the first missing positive integer.

// Example:

// Given [1,2,0] return 3,

// [3,4,-1,1] return 2,

// [-8, -7, -6] returns 1

// Your algorithm should run in O(n) time and use constant space.


int Solution::firstMissingPositive(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int missing =1;
    
    for(int i=0; i<A.size();i++){
        if(A[i]==missing){ //loop will run until thr missing element matches with the element of array
            missing++;
        }else if(A[i]>0) break;
    }
    return missing;
}
