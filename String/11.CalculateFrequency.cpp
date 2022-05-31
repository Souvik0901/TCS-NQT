

Solution 1 :


#include<bits/stdc++.h>
using namespace std;

void frequency(string str)
{
    map<char, int> freq;
    for(int i=0; i<str.size(); i++)
       freq[str[i]]++;

    for(auto x: freq)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}


int main()
{
   string str="take u forward";
    frequency( str);
}
