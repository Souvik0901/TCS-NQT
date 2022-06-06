

#include<bits/stdc++.h>
using namespace std;
int solve(string st)
{
    int spaces=0;
   for(int i=0; i<st.length();i++)
   {
       if(st[i] ==' ')
         spaces++;
   }
   return spaces+1;
}


int main()
{
    string st="Pine Forest covered by Cloud so so damn scary";
    cout<<solve(st);

}
