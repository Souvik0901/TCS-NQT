

#include<bits/stdc++.h>
using namespace std;

double GP(int n, double a, double r)
{
    double sum=0;
    for(int i=0; i<n; i++)
    {
       sum+=a;
       a*=r;
    }
    return sum;
}

int main()
{
    int n=5;
    double a= 6;
    double r =1.5;
    cout<<GP(n,a,r);
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n=5,a=6, r=1.5;
    double sum = 0;
    sum=a*((pow(r,n)-1)/(r-1));

    cout<< sum;
}
