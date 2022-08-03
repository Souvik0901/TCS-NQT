
>>   Brute Force Approach: 1

       Time Complexity: 0(N^3)
       Space Complexity: 0(1)
         
>> Code:

#include<bits/stdc++.h>
using namespace std;

int MaxProd(int arr[], int n)
{
   int res=INT_MIN;
   for(int i=0; i<n; i++)
   {
        for(int j =i+1; j<n; j++)
        {
            int prod =1;
            for(int k=i; k<=j; k++)
            {
              prod*=arr[k];
            }
            res = max(prod,res);
        }
   }
   return res;
}

int main()
{
   int arr[]={2,3,5,6,9,0};
   int n =6;
   int ans = MaxProd(arr,n);
   cout<<ans;
}
