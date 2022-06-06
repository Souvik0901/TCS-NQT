

#include<bits/stdc++.h>
using namespace std;
void InsertSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int x=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>x)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=x;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertSort(arr,n);
}
