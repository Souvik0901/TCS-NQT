

#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>&arr, int i)
{
    
    if(i >= arr.size()/2)
    {
        return;
    }
    swap(arr[i],arr[arr.size()-i-1]);
    rev(arr,i+1);
}

int main()
{
   vector<int>arr={3,4,5,1};
   rev(arr,0);

   for(auto x: arr)
   {
    cout<<x<<" ";
   }
}
