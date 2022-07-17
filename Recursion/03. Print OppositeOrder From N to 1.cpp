

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int i)
{
   if(i==0)
   {
      return;
   }
   cout<<i<<endl;
   solve(n,i-1);
}

int main()
{
   int n = 5;
   solve(5,5);
}
