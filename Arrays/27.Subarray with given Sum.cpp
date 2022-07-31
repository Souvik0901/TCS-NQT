
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        
        long long sum =0;
        int l=0;
        int r=0;
            
          for(int i=0; i<n; i++)
          {
              sum+=arr[i];
              r++;
              while(sum>s and r>l)
              {
                  sum-=arr[l];
                  l++;
              }
              
              if(sum ==  s and l!=r)
                return {l+1, r};
          }
       return {-1};
    }
};



