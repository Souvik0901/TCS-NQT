Solution 1:

      Time Complexity - 0(1)
      Space Complexity - 0(1)

#include<bits/stdc++.h>
using namespace std;

double apsum(double n, double a, double d)
{
    double sum=0;
    sum= (double)((n/2)*((2*a)+(n-1)*d));

    return sum;
}

int main()
{
    double n= 5;
    double a= 1.5;
    double d= 3;
    cout<<apsum(n,a,d);
}



Solution 2:

                    Time Complexity - 0(N)
                    Space Complexity - 0(1)

#include<bits/stdc++.h>
using namespace std;

double apseries(int n, double a, double d)
{
    double sum=0.0;
    for(int i=0; i<n; i++)
    {
        sum+=a;
        a+=d;
    }
    return sum;
}
int main()
{
    int n =5;
    double a= 1.5;
    double d =3;
    cout<<apseries(n,a,d);


}
