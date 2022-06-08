
#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int n)
{
    int val = n;
    int temp = n;
    int count =0;
    while(temp!=0)
    {
        temp = temp/10;
        count++;
    }
    int sum=0;
    while(n>0)
    {
        int re = n%10;
        sum+= pow(re,count);
        n=n/10;

    }
    return (sum==val);


}
int main()
{
    int n=153;
   if( isarmstrong(n)== true)
    cout<<"Yes";
   else
    cout<<"NO";

}


