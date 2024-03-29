
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


-----------------------------------------------------------------------------------------------------------------------------------

>> Brute Force Approach (Optimized Solution) : 2
      Time Complexity :0(N*N)
      Space Complexity :0(1)

>> Code:

#include<bits/stdc++.h>
using namespace std;

int MaxProductSubArray(vector<int>nums)
{
  int res= INT_MIN;
  for(int i=0; i<nums.size(); i++)
  {
    int prod =1;
    for(int j=i+1; j<nums.size(); j++)
    {
        prod*=nums[j];
        res= max(res,prod);
        
    }
      res=  max(res, prod); //  to manages (n-1)th index of array.
  }
  return res;
}


int main()
{
   vector<int>arr={2,-7,-3,-1,5,6,0,2};
   int res = MaxProductSubArray(arr);
   cout<<res;
}


------------------------------------------------------------------------------------------------------------------------------------------

>> Kadanes Algorithm -- 3
     
         Time Complexity : 0(N)
          Space complexity : 0(1)
>> Code:

#include<bits/stdc++.h>
using namespace std;

int MaxProductSubArray(vector<int>arr)
{
   int ma = arr[0];
   int mi= arr[0];
   int res = arr[0];

   for(int i=1; i<arr.size();i++)
   {

      if(arr[i] <0) 
        swap(ma,mi);

      ma = max(arr[i], ma*arr[i]);
      mi = min(arr[i], mi*arr[i]);

     res= max(res, ma);
   }
   return res;

}

int main()
{
    vector<int>arr={2,-7,-3,-1,5,6,0,2};
    int res = MaxProductSubArray(arr);
    cout<<res;
}

