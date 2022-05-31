

#include<bits/stdc++.h>
using namespace std;

void Remove(string st)
{
   set<char> RD;
   for(int i=0; i<st.length();i++)
   {
       RD.insert(st[i]);
   }

   int k= RD.size();
   int j=0;
   for(auto x: RD)
   {
     st[j++]=x;
   }

   for(int i=0; i<k; i++)
     cout<<st[i];
}

int main()
{
  string str="Cloud cover pine forest so so damn scary";
  string st="abcdc";
  
  Remove(st);
}
