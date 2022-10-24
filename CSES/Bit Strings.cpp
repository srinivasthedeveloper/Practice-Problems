/* Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.*/

//It uses combanatoric stategy

#include <iostream>

using namespace std;

#define MOD 1000000007

int main()
{
    int n,answer=1;
    cin>>n;
    
    for(int i=1;i<=n;i++){ //loop will go from 1 to length entered by the user
        answer*=2;  //answer is multiplied by 2 and updated
        answer %= MOD; //remainder is stored in ans 
    }
    
    cout<<answer;

    return 0;
}
