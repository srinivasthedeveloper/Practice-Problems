//Naive Approach

//Time Complexity: O(n^2)
// More worse approach will be like using condition  j<n-1 in place of j<n-i-1 in the second loop  
void bubbleSort(arr,n)
{
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) //if the element of jth index is more than j+1th index then they are swapped
              swap(arr[j],arr[j+1]);
        }

    }
}




//Now in case of Sorted Array and if the array gets sorted in middle of so it does not do work ahead..

void bubbleSort(arr,n)
{
    for(i=0;i<n-1;i++)
    {
        swapped=false; 
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1]) //checking if the element at jth index is greater than the next element index
            {
                swap(arr[j],arr[j+1]); //if the condition is true then the above two elements are swapped
                swapped=true;
            }
        }
        if(swapped==false)     //if the above condition is false and swapped remains true then the loop will break 
           break;
    }
}