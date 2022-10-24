//printing the triangle pattern using recursion
#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter the value of n"<<endl;
  int n;
  cin>>n;
  triangle(1,0,n);
  
  return 0;
}
void triangle(inr ,int c,int n)
{
  if(r==n)
    return;
  if(c<r)
  {
    cout<<"* "<<;
    trianlge(r,c+1,n);
  }
  else
  {
    cout<<endl;
    triangle(r+1,0,n);
  }
}

//input:- Enter the value of n    5
//* 
//* *
//* * *
//* * * *
//* * * * *
