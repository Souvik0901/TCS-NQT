

#include<bits/stdc++.h>
using namespace std;

int Parti(int a[], int l, int h)
{
    int pivot =a[l];
    int i =l;
    int j =h;
    while(i<j)
    {
        while(a[i]<=pivot and i<=h-1)
        {
            i++;
        }

        while (a[j]>pivot and j>=l)
        {
            j--;
        }
        if(i<j) 
        swap(a[i],  a[j]);
    
    };
  
    swap(a[j], a[l]);

    return j;
}


void quicksort(int a[], int l, int h)
{
    int j=0;
    if(l<h)
    {
        j =  Parti(a, l, h);
        quicksort(a, l, j-1);
        quicksort(a,j+1, h);
    }
}


int main()
{
    int arr[]= {4, 8, 6, 1, 0, 5, 1, 6, 2,9999};
    int n =sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
}

