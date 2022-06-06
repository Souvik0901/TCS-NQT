



#include<bits/stdc++.h>
using namespace std;

string ChangeCase(string str)
{
    for(int i=0; i<str.length();i++)
    {
        if((int)str[i]>=97 and (int)str[i]<=122)
        {
           str[i]=towupper(str[i]);
        }
        else if((int)str[i]>=65 and (int)str[i]<=90)
        {
            str[i]=towlower(str[i]);
        }
    }
    return str;
}

int main()
{
    string str="take U Froward Is AWAsome";
    cout<<ChangeCase(str);
}
