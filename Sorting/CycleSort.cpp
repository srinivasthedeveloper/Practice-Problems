// Cycle Sort

// 1. A worse case O(n^2) sorting algorithm
// 2. Does minimum memory writes and can be useful for cases where memory write is costly
// 3. In Place and Not Stable.
// 4. Useful to solve questions like find minimum swaps required to sor the array.


//this code is made one condition in mind that all the input elements are ditinct.

void cycleSortDistinct()
{
    for(int cs=0; cs<n-1; cs++)
    {
        int item= arr[cs]; //as the loop continues item will store values from 0 till n-1
        int pos =cs; //contains values from 0 to n-1 till the condition for loop is true
        for(int i= cs+1; i<n ; i++) 
        {
              if(arr[i] < item) //ith element of array is less than the item values then position is incremented by 1
                pos++;     
        }

        swap(item, arr[pos]); //when the inner loop terminates the item and element present at the positions will get swapped

        while(pos != cs)   //this will continue till the position is not eqaul to the cs
        {
            pos= cs; //since they are unequal,so first they are made eqaul in the loop
            for(int i = cs+1; i<n ; i++)
               if(arr[i] < item)
                 pos++;

            swap(item, arr[pos]);      //swapping the two elements
        }
    }
}