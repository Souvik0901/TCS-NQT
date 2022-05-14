

Solution 1 :  Using HashMap

                 Intitution: Its applicable for sorted non-sorted both arrays.
                   
                 Complexity: 
                             Time Complexity: 0(NlogN)+0(N).   for using set nlogn time takes.
                             Space Complexity : 0(N).
                               
                               
 Code 1: 
              
#include<bits/stdc++.h>

using namespace std;
void RemoveDuplicates(int A[], int n)
{
    set<int> RD;
    for(int i =0; i<n ; i++)
        RD.insert(A[i]);

    int k =RD.size();
    
    int j =0;
    for(int x:RD)
        A[j++]=x;

    for(int i =0; i<k;i++)
        cout<<A[i] <<" ";

}
int main()
{
    int arr[]={1, 3, 4, 3, 4, 1, 5, 5, 6,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    RemoveDuplicates(arr, n);
    
}






Solution 2:  Using two pointer.
  
                 Approach :
                            1. 
                            2.
                            3.
                 Time Complexity : 0(N)
                 Space Complexity : 0(1)
  
 Code 2:

#include<bits/stdc++.h>
using namespace std;


int RemoveDuplicate(int a[], int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(a[i]!=a[j]){
           i++;
           a[i]=a[j];
        }
    }
    return i+1;
    
}
int main()
{
    int a[]={1,1,2,2,2,3,3};
    int n = sizeof(a)/sizeof(a[0]);
    int k =RemoveDuplicate( a, n);
    for(int i =0; i<k; i++)
    {
        cout<<a[i]<<" ";
    }
}


