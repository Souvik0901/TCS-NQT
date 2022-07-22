
//Iterative Method:
#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n =6;
    int ans=1;
   for(int i=1; i<n; i++)
   {
      ans=ans*i;
   }
   cout<<ans;
}



// Recursive Approach:
#include<bits/stdc++.h>
using namespace std;

int Fact(int i)
{
    if(i==0)
    {
        return 1;
    }

    return i* Fact(i-1);
}

int main()
{
    int n=5;
    cout<<Fact(n);
}
