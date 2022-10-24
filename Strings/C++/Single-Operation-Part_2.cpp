// PROBLEM STATEMENT ---->>>

//  Chef has the binary representation S of a number X with him. He can modify the number by applying the following operation exactly once:

//   Make X:=X⊕⌊X/2^Y⌋ , where (1≤Y≤∣S∣) and ⊕ denotes the bitwise XOR operation.

// Chef wants to minimize the value of X after performing the operation. Help Chef in determining the value of Y which will minimize the value of X after the operation.

// <<<---------------------INPUT FORMAT--------------------->>>

// The first line of input will contain a single integer T, denoting the number of test cases.
//  ->Each test case consists of two lines of inputs:
//    --->>The first line contains the length of the binary string S.
//    --->>The second line contains the binary string S.

// <<--------------------OUTPUT FORMAT----------------------->>

// For each test case, output on a new line, the value of Y which will minimize the value of X after the operation.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int l;
		cin >> l;
		string s;
		int sum = 0;

		cin >> s;

		int ans = 0;

		for (int i = 0; i < l; i++)
		{
			if (s[i] == '1')
			{
				ans++;
			}
			if (s[i + 1] == '0')
			{
				ans++;
			}
			else if (s[i + 1] == '1')
			{
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}


// INPUT --->>>                                                            
// 4                                                                                               
// 2                                                                      
// 10                                                                     
// 2                                                                      
// 11
// 3
// 101
// 3
// 110


// OUTPUT--->>>
// 2
// 1
// 2
// 1