Solution 1:  Using For loops (Brute Force)
  
                            Time Complexity :0(N*N)
                             Space : 0(1)
               
Code :

#include<bits/stdc++.h>
using namespace std;
int Find(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int leftsum=0;
        for(int j=0; j<i;j++)
          leftsum+=arr[j];
        
        int rightsum=0;
        for(int j=i+1; j<n; j++)
          rightsum+=arr[j];

        if(leftsum==rightsum)
          return i;
    }
    return -1;

}
int main()
{
    int arr[]={2,3,-1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Find(arr,n);
}




Solution 2:    Optimized 

                          Time Complexity : 0(N)
                         Space : 0(1)

Code :                           
                            
#include<bits/stdc++.h>
using namespace std;
int Find(int arr[], int n)
{
   int tsum=0;
   for(int i=0; i<n; i++)
     tsum+=arr[i];
   
   int leftsum=0, rightsum=tsum;
   for(int i=0; i<n; i++)
   {
      rightsum-=arr[i];
        if(leftsum==rightsum)
          return i;
      leftsum+=arr[i];
   }
   return -1;
}
int main()
{
    int arr[]={2,3,-1,4,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Find(arr,n);

}
