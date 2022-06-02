
Solution 1:   
                    Time Complexity : 0(M*N),  M,size of st1 &  N,size of st2.
                    Space Complexity: 0(N) , for string ans in c++.


Code:

#include<bits/stdc++.h>
using namespace std;

string solve(string st1, string st2)
{
    string ans;
   for(int i=0; i<st1.length();i++)
   {
       int flag=0;
       for(int j=0; j<st2.length();j++)
       {
          if(st2[j]==st1[i])
            flag=1;

       }
       if(flag==0)
         ans.push_back(st1[i]);
       
   }
   return ans;
}
int main()
{
    string st1="ajkdhgdde";
    string st2="arke";
    cout<<solve(st1,st2);
}






Solution 2:  Optimized (Using Map)
  
                Time Complexity: 0(N)
                Space Complexity : 0(N), for using a map.
 
                  
Code:

#include<bits/stdc++.h>
using namespace std;

string solve(string st1, string st2)
{
string ans;
    unordered_map<char ,int>mp;
    for(int i=0; i<st2.length(); i++)
    {
        mp[st2[i]]=1;
    }
   for(int i=0; i<st1.length();i++)
   {
       if(!mp[st1[i]])
          {
              ans.push_back(st1[i]);
          }
   }
   return ans;
}
int main()
{
    string st1="abcdeghw";
    string st2="aabbh";
    cout<<solve(st1,st2);
}
