          Time Complexity : 0(N*N)
            Space Complexity : 0(1)

#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
      for(int i=2; i<x; i++)
      {
          if(x%i==0)
          return false;
      }
      return true;
}
int main()
{
    int min=12;
    int max= 100;
    for(int i=min; i<max; i++)
     {
         if(isprime(i)==true and min!=1)
         {
             cout<<i<<" ";
         }
     }
}





Next Approach :

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
       vector<int>ans; 
        for(int i=M; i<=N; i++)
        {
            if(i==0 || i==1 )
                continue;
             int count =0;     
                for(int k=2; k*k<=i; k++)
                 {
                     if(i%k==0)
                       count++;
                 }
                 if(count==0)
                  ans.push_back(i);
        }
        return ans;
    }
};


Greeks For Geeks :
             Using Class 
             
             
    class Solution {
    bool isprime(int n)
    {

        for(int i=2; i<=sqrt(n); i++)
        {
            if((n%i)==0)
             return false;
        }
        return true;
    }
  public:
    vector<int> primeRange(int M, int N) {
       vector<int>ans; 
        for(int i=M; i<=N; i++)
        {
             if(isprime(i) and i>1)
                  ans.push_back(i);
        }
        return ans;
    }
};
