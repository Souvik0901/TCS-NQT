
          Time complexity - 0(N)
           Space Complexity- 0(1)

#include<bits/stdc++.h>
using namespace std;


char solve(string st)
{
    char ans;
    int count[256]={0};
    int max_freq=0;
    for(int i=0; i<st.length();i++)
       count[st[i]]++;

    for(int i=0; i<st.length(); i++)
    {
        if(count[st[i]]>max_freq)
        {
           max_freq=count[st[i]];
           ans=st[i];
        }
    }
    return ans;
}


int main()
{
    string str ="robinhood";

   cout<<"Max occuring char in the input string is :"<< solve(str);

}
