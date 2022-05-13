


                 Complexity :
                               Time Complexity : 0(nlogn) , for using sorting function.
                               Space Complexity : 0(1).
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void GetMedian(int arr[], int n)
{
    sort(arr,arr+n);
    double median = 0;
   if((n%2)==0)
      {
         int ind1= n/2-1;
         int ind2 = n/2;
         median =double (arr[ind1]+arr[ind2])/2;
      }
    else{
         median =double(arr[n/2]);
    }
    cout<<median;
}
int main()
{
    int arr1[]={2, 8, 9, 5, 7, 12};
    int arr2[]={3, 7, 8 ,9, 0};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr1[0]);

    GetMedian(arr1,n1);
    cout<<endl;
    GetMedian(arr2,n2);
}
