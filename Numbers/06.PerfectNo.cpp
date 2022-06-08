

#include<bits/stdc++.h>
using namespace std;

bool isperfect(int n)
{
    int temp= n;
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if((n%i)==0)
           sum+=i;
    }
    return (sum == temp);

}


int main()
{
    int n = 28;
    if(isperfect(n)==true)
    cout<<"Yes";
    else
    cout<<"No";
}

