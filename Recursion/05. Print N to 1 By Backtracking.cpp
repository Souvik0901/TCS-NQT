

#include<bits/stdc++.h>
using namespace std;

void solve(int n , int i)
{
   if(i>n)
   {
    return;
   }
   solve(n,i+1);
   cout<<i<<endl;

}
int main()
{
    int n=5;
    solve(n,1);
}
