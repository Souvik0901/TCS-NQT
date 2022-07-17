
#include<bits/stdc++.h>
using namespace std;

void solve(int n, int i)
{
   if(i>n)
   {
     return;
   }
   cout<<i<<endl;
   solve(n,i+1);
}
int main()
{
  int n =5;
  solve(n,1);
}
