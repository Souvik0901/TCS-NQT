Solution 1:
                Time Complexity : 0(N)
                  Space : 0(N), for extra vector <int> ans;


Code:

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int a[], int n, string direc, int pos)
{  
    int k=0;
    vector<int>ans;
    if(direc=="Left" )
    {
        for(int i=pos; i<n; i++)
          ans.push_back(a[i]);

        for(int i=0; i<pos;i++)
        ans.push_back(a[i]);
    }
    if(direc=="Right")
    {
        k=n-pos;
        for(int i=k; i<n; i++)
          ans.push_back(a[i]);     
          
        for(int i=0; i<k;i++)
           ans.push_back(a[i]);
    }

    // for(int i=0; i<ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
  return ans;

}
int main()
{
    int arr[]={2,8,9,0,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    string direc="Left";
    int pos=2;
    vector<int>k=solve(arr,n,direc,pos);
    for(int i=0; i<n; i++)
       cout<<k[i]<<" ";
}

