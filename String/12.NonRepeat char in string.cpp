


#include<bits/stdc++.h>
using namespace std;

void NONREPEAT(string str)
{
    unordered_map<char, int> Freq;
    for(int i=0; i<str.size(); i++)
    {
        Freq[str[i]]++;
    }
    for(auto x : Freq)
    {
        if(x.second==1)
          cout<<x.first<<" ";
    }
}

int main()
{
    string str="Not less than a horror set up";
    NONREPEAT(str);

}
