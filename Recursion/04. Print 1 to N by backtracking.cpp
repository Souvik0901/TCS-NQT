

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int i)
{ 
   // base case
   if(i<1)
   {
      return;
   }
   solve(n,i-1);
   cout<<i<<endl;
}

int main()
{
    int n =5;
    solve(n, 5);
}
