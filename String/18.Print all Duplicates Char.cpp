

   Solution 1:
                         Time Complexity- 0(N)
                         Space Complexity- 0(1)
                           
                           
Code:


#include<bits/stdc++.h>
using namespace std;

 void solve(string st)
 {
     int count[26]={0};
     int max=0;
     for(int i=0; i<st.length(); i++)
         count[st[i]-'a']++;
     
     for(int i=0; i<26; i++)
     {
         if(count[i]>1)
          cout<<(char)(i+'a')<<" "<<count[i]<<endl;
     }
 }

int main()
{
    string st="Robinhood hio denyi";
    solve(st);
}



Solution : 2
  
                Time Complexity : 0(NlogN)
                Space Complexity : 0(1)
   
  Code:


#include<bits/stdc++.h>
using namespace std;

void Print(string st)
{
    map<char , int> entry;

    for(int i=0; i<st.length(); i++)
      entry[st[i]]++;

    for(pair<char,int>x:entry)
    {
         if(x.second>1)
         cout<<x.first<<"--> "<<x.second<<"\n";
    }
    

}

int main()
{
    string str="Robinhood classy flower";
    Print(str);
    
}

