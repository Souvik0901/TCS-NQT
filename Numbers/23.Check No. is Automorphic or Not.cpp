

        Time Complexity : 0(N)
        Space Complexity: 0(1)
          
 CODE:

#include<bits/stdc++.h>
using namespace std;
bool isamphorbhic(int n)
{ 
    int  sq = n*n;
    while(n>0)
    {
        if(n%10!=sq%10)
        return false;

        n/=10;
        sq/=10;
    }
    return true;

}

int main()
{
    int n =25;
   if(isamphorbhic(n))
   cout<<"It's a Amphorbic No.";
   else
    cout<<" Not";
}
