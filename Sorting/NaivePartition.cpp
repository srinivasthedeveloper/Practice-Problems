//Naive Partition - Stable
//Lomuto and Hoare Partition - Unstsable


int partititon(int arr[], int l, int h, int p)
{

    int temp[h-l+1], index=0;
    for(int i=l;i<=h;i++)
       if(arr[i] < arr[p])              //if the element at ith position is less than pth position
        {
            temp[index] = arr[i];
            index++;
        }

    for(int i=l; i<=h; i++)
    {
        if(arr[i]==arr[p])             //if the element at ith position is equal to pth position
        {
            temp[index]= arr[i];
            index++;
        }
    }

    int res=l+index-1;
    for(int i=l; i<=h;i++)
    {             
        if(arr[i] > arr[p])             //if the element at ith position is greater than pth position
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l;i<=h;i++)
    {
        arr[i]= temp[i-l];
    }

    return res;    
}