/* You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required? */

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    long long int n, input,count=0,answer=0;
    cin>>n;
    long long int a[n];
    
    for(int i=0;i<n;i++){ //code to input the array of n length
        cin>>a[i];
    }
    
    for(int i=1; i<n;i++){
        if(a[i]<a[i-1]){  //condition to check whether the element is less than to the next element in the array
            count = a[i-1]-a[i]; //difference between the elements is stored in count
            a[i] = count + a[i]; //ith element is updated by adding the count in it
            answer+=count; //answer variable is updated by adding the value of count in it
            count=0;
        }
    }
    
    cout<<answer;
    
 


  return 0;
}
