/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence.
This is a maximum-length substring containing only one type of character. */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    char current;
    int answer = 0, count = 0;

    for (int i = 0; i < n.length(); i++) //loop from 0 to the length of the string
    {
        if (n[i] != current) //if the ith index of the string is not equal to  current then current is updated to that value in the index
        {
            current = n[i];
            count = 0;
        }

        if (n[i] == current) //if the ith index of the string is same as current then count is incremented by 1
        {
            count++;
        }
        answer = max(answer, count); //answer will have  the maximum value of answer and count 
    }

    cout << answer;

    return 0;
}
