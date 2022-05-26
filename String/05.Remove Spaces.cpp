

#include<bits/stdc++.h>
using namespace std;
string Remove(string st)
{
   for(int i=0; i<st.length();i++)
   {
       if(st[i]==' ')
       {
           st =st.substr(0,i)+st.substr(i+1);
           i--;

       }
      
   }
    return st;
}


int main()
{
   string s="Take u Forward";
   cout<<Remove(s);
}


