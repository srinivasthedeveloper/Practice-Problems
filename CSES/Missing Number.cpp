/* You are given all numbers between 1,2,…,n except one. Your task is to find the missing number. */

// Using Number Theory Trick

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    long long int n, input, sum=0;
    cin>>n;
    
    for(int i=0;i<n-1;i++){
        cin>>input;
        sum+=input; //sum of all elements is calculated and stored in sum variable
    }
    
    cout<< (n*(n+1))/2 - sum <<endl; //adding the whole sum and subtracting the value of 'sum' variable will give the missing number
    

    return 0;
}
