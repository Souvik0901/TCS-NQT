
//Parameterized Sum :
#include<bits/stdc++.h>
using namespace std;
int n=5;
void solve(int i , int sum)
{   
    //base case
    if(i>n)
    {
      cout<<sum;
      return;
    }
    solve(i+1,sum+i);
}

int main()
{ 
   solve(1,0);
}



//Recursive Sum: 
#include<bits/stdc++.h>
using namespace std;
int solve(int i)
{
   if(i<1)
   {
    return 0;
   }
   return i+solve(i-1);

}
int main()
{
   int n=5;
   cout<<solve(n);
}

