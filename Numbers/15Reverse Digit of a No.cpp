

#include<bits/stdc++.h>
using namespace std;
int reversedig(int n)
{
    int sum=0;
    while(n!=0)
    {
        int re= n%10;
        sum = sum*10 +re;
        n/=10;
    }
    return sum;
}

int main()
{
    int n=123;
    cout<<reversedig(n);
}
