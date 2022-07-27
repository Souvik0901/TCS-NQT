

#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int sum =0;
  while(n>0)
  {
    int re =n%10;
    sum+=re;
    n=n/10;
  }
  return sum;
}
int main()
{
    int n =123;
    int p =solve(n);
    cout<<p;

}
