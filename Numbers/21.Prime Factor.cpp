
Approach 1:
    Time Complexity : 0(N)
    Space Complexity: 0(1)
       
#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
   for(int i=2; n>1; i++)
   {
       if(n%i==0)
       {
            while(n%i==0)
            {
                cout<<i<<" ";
                n = n/i;
            }
       }
   }
}


int main()
{
    int n =12;
    solve(n);
}





Approach 2: Optimized Solution 

    Time Complexity: 0(sqrt(N))
    Space Complexity: 0(1)
       
       
  #CODE:
       
 #include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
   for(int i=2; i<=sqrt(n),i>1; i++)
   {
       if(n%i==0)
       {
            while(n%i==0)
            {
                cout<<i<<" ";
                n = n/i;
            }
       }
   }
}


int main()
{
    int n =78;
    solve(n);
}

