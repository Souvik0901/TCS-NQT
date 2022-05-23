
#include<bits/stdc++.h>
using namespace std;

void Solve(string s,int n)
{

int vowels=0,consonants=0,space=0;
   for(int i=0; i<n; i++)
   {
       s[i]=towlower(s[i]);
   }

   for(int j=0; j<n; j++)
   {
       if(s[j] =='a'||s[j] =='e'||s[j] =='i'||s[j] =='o'||s[j] =='u')
         vowels++;
       else if(s[j]>='a' and s[j]<='z' )
         consonants++;
       else if(s[j] ==' ')
         space++;

   }


   cout<<"No. of Vowels :"<<vowels<<endl;
   cout<<"No. of Consonants :"<<consonants<<endl;
   cout<<"No. of Spaces: "<<space;





}


int main()
{
    string s="Swaraj Got an offer 6.5lpa from Accenture";
    int n= s.length();
    Solve(s,n);
}
