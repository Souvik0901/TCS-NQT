

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n1, n2;
    n1=10, n2=100;
    int great =max(n1,n2);
    cout<<great;
}



Solution 2:

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n1, n2;
    n1=10, n2=100;
    if(n1>n2)
        cout<<n1<<" is greter";
    else
        cout<<n2<<" is greater";
}
