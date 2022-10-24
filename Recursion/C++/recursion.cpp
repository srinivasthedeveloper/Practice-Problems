//demonstrate the working of linear search using recursion technique

#include<bits/stdc++.h>
using namespace std

int main()
{
  cout<<"Enter the number of elements in the array"<<endl;
  int n;
  cin>>n;
  int a[n];

  cout<<"Enter the values in the array"<<endl;

  for(int i=0;i<n;i++)
    cin>>a[i];

  cout<<"Enter the value to be searched"<<endl;
  int val;
  cin>>val;

  bool ans=find(a,0,val);
  cout<<ans<<endl;

  return 0;
}
bool find(int a[],int index,int val)
{
  if(a[i]==val)
    return true;
  return find(a,index+1,val);
}
//input array:- {1,2,3,4,7,6,9,}
//element to be searched:- 9
//output:- true
