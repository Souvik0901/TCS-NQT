


#include<bits/stdc++.h>
using namespace std;

 void merge(int arr[], int l, int mid, int h)
 {
       int i =l, j= mid+1;
       int temp[100], k=0;
       while(i<=mid and j<=h)
       {
           if(arr[i]>arr[j])
             temp[k++] = arr[j++];
           else
             temp[k++] = arr[i++];
       }

        for(; i<=mid; i++)
           temp[k++] = arr[i];
        for(; j<=h; j++)
           temp[k++] = arr[j];

        for(int i = l; i<=h; i++)
            arr[i]=temp[i];
 }
void mergesort(int arr[], int l, int h)
{
   if(l<h)
   {
    int mid=(l+h)/2;
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, h);
    merge(arr,l, mid, h);
   }
}
int main()   
{
    int arr[]={9,7,4,7,2,1,4,8};
    int n =sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
