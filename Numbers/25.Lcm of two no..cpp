

#include<bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
    if(n2==0)
    return n1;

    return GCD(n2, n1%n2);
}

int main()
{
    int n1 =6, n2 =18;
    int gcd =GCD(n1,n2);
    int lcm =n1*n2/gcd;
    cout<<lcm;
}



#include<bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
   int ans=0;
   for(int i=1; i<=min(n1,n2);i++)
   {
      ans= i;
   }
   return ans;
}


int main()
{
   int n1=4, n2=8;
   int g= GCD(n1,n2);
   int lcm = n1*n2/g;
   cout<<lcm;

}
