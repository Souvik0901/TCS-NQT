

#include<bits/stdc++.h>
using namespace  std;

void RepeatingElm(vector<int>&arr)
{
    unordered_map<int, int> Repeat;

    for(int i : arr)
    {
        Repeat[i]++;   
    }
    for(auto i : Repeat)
    {
        if(i.second>1)
              cout<<i.first<<" ";
    }

}




int main()
{
   vector< int> arr={2,7,8,9,7,9,7,9,7,9,3,4,3,0};
    RepeatingElm(arr);

}
