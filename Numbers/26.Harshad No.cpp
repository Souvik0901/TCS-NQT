

#include<bits/stdc++.h>
using namespace std;

bool IsHarshad(int n)
{
    int temp=n;
    int sum=0;
   while(n>0)
   {
      int re =n%10;
      sum+=re;
      n/=10;
   }
   if(temp%sum==0)
     return true;
   else
     return false;

}

int main()
{
   int n=224;
   if(IsHarshad(n))
    cout<<"Yes! It's a Harshad No.";
   else
    cout<<"No! It's not Harshad No.";
}
