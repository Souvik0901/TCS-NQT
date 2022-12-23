
                                 Time Complexity: 0(N)  Reason:   Iteration in array , searching hash table
                                Space Complexity : 0(N)
#include<bits/stdc++.h>
using namespace std;

void RemoveDupli(int arr[], int n)
{
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
       if( mp.find(arr[i])==mp.end())
        { 
            cout<<arr[i]<<" ";
            mp[arr[i]]++;
        }
    }
}


int main()
{
      int a[]={6,9,0,4,5,6,4,6,6,0};
      int n= sizeof(a)/sizeof(a[0]);
      RemoveDupli(a,n);
}


GFG Solution

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) 
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0; i<N; i++){
        if(mp.find(A[i])!=mp.end())
        continue;
        ans.push_back(A[i]);
        mp[A[i]]++;
        
        
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

// Driver method to test above method
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<int> v = ob.removeDuplicate(a, n);

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
