/* Consider an algorithm that takes as input a positive integer n.
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. The algorithm repeats this,
until n is one. For example, the sequence for n=3 is as follows:

3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n. */



#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << n << " ";

    while (n != 1) //the loop is repeated till the value of n becomes 1
    {
        //if n is even
        if (n % 2 == 0)  //n is divisible by 2
        {
            n = n / 2; //n is divided by 2 if it is even
            cout << n << " ";
        }
        //if n is odd
        else
        {
            n = (n * 3) + 1; //n is multiplied by 3 and 1 is added
            cout << n << " ";
        }
    }

    return 0;
}
