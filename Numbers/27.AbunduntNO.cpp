

#include<bits/stdc++.h>
using namespace std;
bool isabundunt(int n)
{
    int temp =n;
    int sum =0;
    for(int i=1;i<n; i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum>temp)
    return true;
    else
    return false;
}

int main()
{
   int n = 18;
   if(isabundunt(n))
   cout<<" Abundunt NO.";
   else
   cout<<" It's not an abundunt no.";
}
