//Naive Approach
//Time: Theta(n) and Aux.Space: Theta(n)
//Four Traversals
void sort(int arr[], int n)
{
    int temp[n], i=0;
    for(int j=0; j<n; j++)
      if(arr[j]==0){ temp[i]= arr[j]; i++; } //for 0th index having 0 then store that value in temp

    for(int j=0; j<n; j++)
      if(arr[j]==1){ temp[i]==arr[j]; i++;} //for 0th index having 1 then store that value in temp

    for(int j=0; j<n; j++)   
       if(arr[j]==2){ temp[i]= arr[j]; i++;}//for 0th index having 2 then store that value in temp
    for(int j=0; j<n; j++)
       arr[j]= temp[j];     
}



//VERY IMPORTANT: Standard Algorithm Implementation
//Dutch National Flag Algorithm.
//Does the Job only in one traversal
//Time : Theta(n)
//Aux.Space: Theta(1) 
void sort(int arr[], int n)
{
    int lo= 0, hi= n-1; mid=0;
    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]); //sorting all the 0's at one side
            low++;
            mid++;
        }

        else if(arr[mid]==1)   //sorting all the 1's after zeros
           mid++;
        else{
            swap(arr[mid], arr[hi]);  //sorting all the 2's after 0 and 1
        }   hi--;
    }
}
