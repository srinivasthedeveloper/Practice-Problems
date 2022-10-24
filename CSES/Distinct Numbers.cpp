/* You are given a list of n integers, and your task is to calculate the number of distinct values in the list. */ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) // code to input the array from the user
    {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end()); //sorting the array

    for (int i = 1; i <= n; i++)
    {
        if (ans[i] != ans[i - 1]) //condition to check if ith and (i-1)th index are distinct or not
            count++; //if they are distinct then count is increased by 1
    }
    cout << count << endl; //count is printed back
}
