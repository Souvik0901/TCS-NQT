

#include<bits/stdc++.h>
using namespace std;

int Fibo(int n)
{
    if(n<=1)
    {
      return n;
    }
    int last =Fibo(n-1);
    int slast= Fibo(n-2);
    return last+slast;
   
}

int main()
{
    cout<<Fibo(4);
}
