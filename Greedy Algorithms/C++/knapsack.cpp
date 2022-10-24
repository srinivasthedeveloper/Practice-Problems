/*
    Knapsack Problem
    Given a set of items, each with a weigth and a profit, determine the number of each item to include in a collection so that the total weight is less than 
    or equal to a given limit and the total profit is as large as possible. It derives its name from the problem faced by someone who is constrained by a 
    fixed-size knapsack and must fill it with the most valuable items.

*/

#include <iostream>
using namespace std;
int main()
{
    int array[2][100], n, w, i, curw, used[100], maxi = -1, totalprofit = 0;

    // input number of objects
    cout << "Enter number of objects: ";
    cin >> n;

    // input max weight of knapsack
    cout << "Enter the weight of the knapsack: ";
    cin >> w;

    /* Array's first row is to store weights second row is to store profits */
    for (i = 0; i < n; i++)
    {
        cin >> array[0][i] >> array[1][i];
    }
    for (i = 0; i < n; i++)
    {
        used[i] = 0;
    }
    curw = w;
    // loop until knapsack is full
    while (curw >= 0)
    {
        maxi = -1;
        // loop to find max profit object
        for (i = 0; i < n; i++)
        {
            if ((used[i] == 0) && ((maxi == -1) || (((float)array[1][i] / (float)array[0][i]) > ((float)array[1][maxi] / (float)array[0][maxi]))))
            {
                maxi = i;
            }
        }
        used[maxi] = 1;

        // decrease current weight
        curw -= array[0][maxi];

        // increase total profit
        totalprofit += array[1][maxi];
        if (curw >= 0)
        {
            cout << "\nAdded object " << maxi + 1 << " Weight: "
                 << array[0][maxi] << " Profit: " << array[1][maxi]
                 << " completely in the bag, Space left: " << curw;
        }
        else
        {
            cout << "\nAdded object " << maxi + 1 << " Weight: "
                 << (array[0][maxi] + curw) << " Profit: "
                 << (array[1][maxi] / array[0][maxi]) * (array[0][maxi] + curw) << " partially in the bag, Space left: 0"
                 << " Weight added is: " << curw + array[0][maxi];
            totalprofit -= array[1][maxi];
            totalprofit += ((array[1][maxi] / array[0][maxi]) * (array[0][maxi] + curw));
        }
    }

    // print total worth of objects filled in knapsack
    cout << "\nTotal worth of the bag : " << totalprofit;
    return 0;
}

/*
    Enter number of objects: 3
    Enter the weight of the knapsack: 50
    10 60
    20 100
    30 120

Added object 1 Weight: 10 Profit: 60 completely in the bag, Space left: 40
Added object 2 Weight: 20 Profit: 100 completely in the bag, Space left: 20
Added object 3 Weight: 20 Profit: 80 partially in the bag, Space left: 0 Weight added is: 20
Bags filled with objects worth: 240

*/
