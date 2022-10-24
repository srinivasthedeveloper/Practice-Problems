//find the only odd occuring number in an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter the size of the array"<<endl;
  int n;
  cin>>n;
  int a[n];
  cout<<"Enter the the elelemnts in the array with only one nymber occuring odd number of times"<<endl;
  for(int i=0;i<n;i++)
    cin>>a[i];
  int ans=findOdd(a,n);
  
  return 0;
}
int findOdd(int a[],int n)
{
  int res=0;
  for(int i=0;i<n;i++)
  {
    res=res^a[i];
  }
  return res;
}

//input:- {4,3,4,4,4,5,5}
//output:- 3
