

#include<bits/stdc++.h>
using namespace std;
void finddig(int n)
{
   int maxdig=INT_MIN, mindig=INT_MAX;
   while(n>0)
   {
       int re = n%10;
       maxdig=max(maxdig,re);
       mindig=min(mindig,re);
       n/=10;
   }
   cout<<"Maxdigit : "<<maxdig<<endl;
   cout<<"Mindigit : "<<mindig<<endl;
}

int main()
{
    int n=9982;
    finddig(n);
}
