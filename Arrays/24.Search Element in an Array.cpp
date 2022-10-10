
Solution 1:

Code:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,9,8,3,4,6};
    int k=6;
    for(int i=0; i<6;i++)
    {
        if(arr[i]==k)
          cout<<i;
    }
}




Solution 2 : Binary Search
                  Time Complexity: 0(logN)
                  Space : 0(1)
                    
  
 Code :

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>nums, int search, int low, int high)
{
    int mid = low+(high-low)/2;

    while(low<high)
    {
        if(nums[mid]==search)
        {  
            return  mid;
            break;
        } 
        else if(nums[mid]<search)
        {
            return BinarySearch(nums,search,mid+1,high);
        }

        else{
            return BinarySearch(nums,search,low,mid-1);
        }
    }
    return -1;
}


int main()
{
   vector<int>nums={2,3,5,6,7,8,9};
   int search= 3;
   int n = nums.size();
   int ans = BinarySearch(nums,search,0,n-1);
   cout<<ans;
}

