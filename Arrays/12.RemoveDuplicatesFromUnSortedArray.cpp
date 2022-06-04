
                                 Time Complexity: 0(N)  Reason:   Iteration in array , searching hash table
                                Space Complexity : 0(N)
#include<bits/stdc++.h>
using namespace std;

void RemoveDupli(int arr[], int n)
{
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
       if( mp.find(arr[i])==mp.end())
        { 
            cout<<arr[i]<<" ";
            mp[arr[i]]++;
        }
    }
}


int main()
{
      int a[]={6,9,0,4,5,6,4,6,6,0};
      int n= sizeof(a)/sizeof(a[0]);
      RemoveDupli(a,n);
}
