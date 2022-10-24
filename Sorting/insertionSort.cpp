//in-Place Algorithm and stable 
//worst-case time complexity: O(n^2) in reverse sorted array case
//best case time complexity: O(n) in already sorted array case
//in general: O(n^2)

void insertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int key=arr[i]; //initializing key with the ith elements of the array
        int j=i-1;
        while(j>=0 && arr[i]>key)
        {
            arr[j+1]=arr[j]; //updsting the next element to have value of the previous element of the array
            j--;  //decrementing the value of j 
        }
        arr[j+1]=key;  //key will be equal to the value of array with index (j+1)th
    }
}
