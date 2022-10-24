#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cout<<"Enter the string: ";
    cin>>s1; 
    int flag=0;
    
    
    
    int l = s1.length()-1;  
    
    for(int i=0; i<=l; i++){ //loop intialized from 0 to the length of the string
        if(s1[i]!=s1[l-i]) //condition to check if the first and last element is same or not which continues in a loop one by one
        flag=1; //if condition satisfied change the value of flag to 1
    }
    
    if(flag){
        cout<<"It is not a palindrome"<<endl; //if flag is true then the srring is palindrome
    }else{
        cout<<"It is a palindrome"<<endl; //if above condition is false then the string is not palindrome
    }
    
return 0;
    
}


/* Sample Output
1. Enter the string: wow
It is a palindrome
2. Enter the string: abc
It is not a palindrome
 */
