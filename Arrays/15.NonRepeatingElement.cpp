


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void NoRepeat(vector<int> &a)
{
   unordered_map<int,int> NP;
   for(auto i: a)
   {
       NP[i]++;
   }
   for(auto i: NP)
   {
       if(i.second==1)
       cout<<i.first<<" ";
   }
}



int main()
{
    vector<int> a = {8,5,6,10,10,10,6};
    cout<<"No Repeating Element :"<<endl;
    NoRepeat(a);

}
