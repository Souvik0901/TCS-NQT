

#include<bits/stdc++.h>
using namespace std;
void solve(int i, int n)
{
    if(i>=n)
    {
        return ;
    }
    cout<<"Souvik"<<"-"<<i+1<<endl;
    solve(i+1,n);
}

int main()
{
    int n=5;
    solve(0,n);
    
}
