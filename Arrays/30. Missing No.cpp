

Approach 1: GFG
         Time Complexity: 0(N)
         Space - 0(1)  
           
>>Code:
int missingNumber(int A[], int N)
{
    // Your code goes here
    unordered_map<int, int>mp;
    for(int i=0; i<N; i++)
    {
        mp[A[i]]=1;
    }
    for(int i=1; i<=N; i++)
    {
        if(mp[i]!=1)
        return i;
    }
    return 0;
}




Approach : 2
  
>> Code: 
int missingNumber(int A[], int N)
{
    // Your code goes here
       int sum =0;
       int res= (N*(N+1))/2;
       for(int i=0; i<N-1; i++)
       {
           sum+=A[i];
       }
       int ans = res- sum;
       
       return ans;
   
}
