

Solution 1:

           Time Complexity : 0(NlogN), for using the sorting function.
           Space Complexity : 0(1).
             

Code: 1

#include<bits/stdc++.h>
using namespace std;

string anagram(string st1,string st2)
{
    if(st1.length()!=st2.length())
       return "Not Anagram";
    
    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());

    if(st1==st2)
       return "Anagram";
    else
       return "Not Anagram";
}
int main()
{
    string str1="BROTHER";
    string str2="RETHORB";

    cout<<anagram(str1,str2);

}




Code: 2
  
  
  
#include<bits/stdc++.h>
using namespace std;

bool anagram(string st1,string st2)
{
    if(st1.length()!=st2.length())
       return false;
    
    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());

     for(int i=0; i<st1.length(); i++)
     {
         if(st1[i]!=st2[i])
          return false;
        
     }
     return true;
}
int main()
{
    string str1="BROTHER";
    string str2="RETHOkd";

    if(anagram(str1,str2))
         cout<<"True";
    else
        cout<<"False";

}

Code: 3
           Time Complexity : 0(N)
           Space Complexity : 0(1)
                      
                      
                      
       
#include<bits/stdc++.h>
using namespace std;

bool isanagram(string st1, string st2)
{
    int count[26]={0};
    for(int i=0; i<st1.length(); i++)
        count[st1[i]-'a']++;

    for(int i=0; i<st2.length();i++)
        count[st2[i]-'a']--;
 
    for(int i=0; i<26; i++)
    {
        if(count[i]!=0)
          return false;
    }
   return true;
}

int main()
{
    string st1="teaher";
    string st2="reahiet";

    if(isanagram(st1, st2))
       cout<<"It's Anagram ";
    else
       cout<<"It's Not Anagram ";
}

