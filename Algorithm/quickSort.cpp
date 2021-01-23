void quickSort(int arr[], int low, int high)
{
    // code here
    if(low<high){
        int p= partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot=arr[high];
   int pvindex=low;
   for(int i=low;i<high;i++){
       if(arr[i]<pivot){
           int temp=arr[i];
           arr[i]=arr[pvindex];
           arr[pvindex]=temp;
           pvindex++;
       }
   }
   int temp=arr[high];
   arr[high]=arr[pvindex];
   arr[pvindex]=temp;
   
   return pvindex;
}
