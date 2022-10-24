PROBLEM STATEMENT:

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the rightmost pivot index. If no such index exists, return -1.

Here is code starts -->

#include<iostream>
using namespace std;
int findpivot(int arr[],int n){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
int arr[5]={7,9,1,2,3};  // Sample Input 
int a=findpivot(arr,5);   
cout<<"The pivot in the array will be at index "a<<endl;    // Sample Output for the input will be at index 2.
return 0;
}

 Sample Input                        Sample Output
  {1,7,3,6,5,6}                       The pivot in the array will be at index 5
