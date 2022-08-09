


#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArr(vector<int>nums)
{
    int res =INT_MIN;
    for(int i=0; i<nums.size();i++)
    {  
        for(int j=i+1; j<nums.size(); j++)
        {
            int sum =0;
            for(int k=i; k<=j;k++)
            {
                sum+=nums[k];   
            }
             res = max(sum, res);
        }
    }
    return res;
}
int main()
{
    vector<int>nums={2,-1,4,-2,-5,7,9};
    int res =MaxSumSubArr(nums);
    cout<<res;
}






#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArr(vector<int>arr)
{
    int res =INT_MIN;
    for(int i=0; i<arr.size();i++)
    {
        int sum =0;
        for(int j =i+1; j<arr.size();j++)
        {
          sum+=arr[j];
          res = max(res, sum);
        }
        res =max(sum,res);
    }
    return res;
}

int main()
{
    vector<int>arr={1,3,-3,4,-5,6};
    int res =MaxSumSubArr(arr);
    cout<<res;

}




#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArr(vector<int>arr)
{
   int res =INT_MIN;
   int sum =0;
   for(int i=0; i<arr.size();i++)
   {
      sum+=arr[i];
      res = max(sum, res);

      if(sum<0) sum =0;
   }
   return res;
}

int main()
{
    vector<int>arr={-1,-3,-3,9,-5,6};
    int res =MaxSumSubArr(arr);
    cout<<res;

}
