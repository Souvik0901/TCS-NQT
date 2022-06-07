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
