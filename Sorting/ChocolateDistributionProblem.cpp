int minDiff(int arr[], int n, int m)
{
    if(m>n) return -1; //if the secong number is greater than first number then return -1
    sort(arr, arr+n); //sorting the array
    int res= arr[m-1]-arr[0];  //res will store the difference between the element present at (m-1)th index and the 0th index
    for(int i=1; (i+m-1)< n; i++)
        res= min(res, arr[i+m-1]- arr[i]); //if the condition is true,then min of the two values is obtained and stored in res variable

    return res;    
}