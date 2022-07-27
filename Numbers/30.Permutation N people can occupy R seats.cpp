

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
   if(n<=1)
    return n;

   return n*fact(n-1);
}
int main()
{
    int n = 8;
    int seat= 4;
    int ans= fact(n)/fact(n-seat);
    cout<<n<<" people can seat in "<<seat<<" seats "<<ans <<" ways";
}
