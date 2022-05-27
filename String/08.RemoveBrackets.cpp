Solution 1:

#include<bits/stdc++.h>
using namespace std;

string solve(string st)
{
   for(int i=0; i<st.size();i++)
   {
       if(st[i]=='(' || st[i]==')')
       {
         st=st.substr(0,i)+st.substr(i+1);
         i--;
       }
   }
   return st;
}

int main()
{
    string str="(take care bro)";
    string str1="(((a-b))+c)";
    cout<<solve(str)<<"\n";
    cout<<solve(str1);
}



Solution 2:

#include<bits/stdc++.h>
using namespace std;

string solve(string k)
{
    string ans;
    for(int i=0; i<k.size(); i++)
    {
        if(k[i]!='(' and k[i]!=')')
           ans.push_back(k[i]);

    }
    return ans;
}

int main()
{
    string str="(((a-b))+c)";
    cout<<solve(str);
}


