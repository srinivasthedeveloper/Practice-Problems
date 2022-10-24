//Naive Solution: Time Complexity: Theta(n^2)

int getMinDiff(int arr[], int n)
{
    int res= INT_MAX;
    for(int i=1; i<n; i++)
         for(int j=0;j<i;j++)
            res= min(res, (abs[i]- abs[j]));  //minimum is found out between res and difference between the elements present at the ith index and jth index

    return res;        

}


//Efficient Solution
// Algorithm:

// 1. Sort the Array
// 2. Compute the differences between the adjacent elements.
// 3. And return the minimum difference.


int getMinDiff(int arr[], int n)
{
    sort(arr, arr+n);
    int res= INT_MAX;

    for(int i=1; i<n; i++)
       res= min(res, arr[i] - arr[i-1]); //minimum is found out between res and difference between the elements present at the ith index and (i-1)th index

    return res;   

}
