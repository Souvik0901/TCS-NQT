Iterative Approach:

#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
         cout<<i<<" ";
    }

}


int main()
{
    int n = 18;
    solve(n);
}



Optimized Approach: 
Time Complexity: 0(sqrt(N))
Space Complexity: 0(1)
  
#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=1; i<sqrt(n); i++)
    {
        if(n%i==0)
         {
            if(n/i == i)
            cout<<i<<" ";
            else
                cout<<i<<" "<<n/i<<" ";
         }
    }

}


int main()
{
    int n = 18;
    solve(n);
}

