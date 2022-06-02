




#include<bits/stdc++.h>
using namespace std;


string solve(string st)
{
    for(int i=0; i<st.length();i++)
    {
        if(int(st[i])==90)
           st[i]=char(65);
        else if(int(st[i])==122)
           st[i]=char(97);

        else if(int(st[i])>=65 and int(st[i])<90 || int(st[i])>=97 and int(st[i])<122 )
           st[i]=char(int(st[i])+1);
    }
    return st;
   
}
int main()
{
   string st="abndzkKPA";
   cout<<solve(st);

}
