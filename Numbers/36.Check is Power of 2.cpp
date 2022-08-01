
>> Solution : Using Recursion

#include<bits/stdc++.h>
using namespace std;

bool ispower(int N)
{
   if(N==0) return false;
   if(N==1) return true;
   if(N%2!=0) return false;

   return (ispower(N/2));
}

int main()
{
   int N=64;
   if(ispower(N))
   cout<<"Yes It's a power of 2";
   else
   cout<<"No It's not a power of 2";
}






>> GFG : Is it Power of 4?
    
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
      if(n==0) return 0;
      if(n==1) return 1;
      if(n%4!=0) return 0;
      
      return (isPowerOfFour(n/4));
      
    }
};

