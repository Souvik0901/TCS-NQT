Approach 1 : LeetCode

if i array is sorted then the everytime the next element will be greater than the previous one and if the array is rotated too then there will be a point 
where the next element will be smaller then the previous element . i used this approach and have attached the code below.

class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count =0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] > nums[i])
            {         
                count++;
            }             
        }
        if(nums[n-1]>nums[0]) count++;
        
        return count<=1;
        
    }
};




Approach 2: GFG

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
      for(int i=1; i<n; i++)
      {
          if(arr[i-1]>arr[i])
          return false;
      }
      return true;
    }
};

