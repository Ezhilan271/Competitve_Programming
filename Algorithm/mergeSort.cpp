void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int i=l,j=m+1,c=0;
     int ar[r-l+1];
     while(i<=m && j<=r){
         if (arr[i]<arr[j])  ar[c]=arr[i++];
         else ar[c]=arr[j++];
         c++;
     }
     while(i<=m){
         ar[c]=arr[i++];
         c++;
     }  
     while(j<=r){
         ar[c]=arr[j++];
         c++;
     }  
     c = 0;
     i = l;
     while(c<r-l+1)  arr[i++]=ar[c++];
}
