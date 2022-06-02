



Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.
  
  
  
  
 Solution 1:    Brute Force
  

                               Time Complexity:  0(N^2)
                               Space Complexity: 0(1)

Code :

#include<bits/stdc++.h>
using namespace std;

int main()
 {
    // int arr[][2]={{1,2},{2,3},{7,9},{3,2},{2,1}};        You can use this also.
  
    int arr[4][2];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Symetric Pair are: "<<" : ";
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           if(arr[i][0] == arr[j][1] && arr[j][0] == arr[i][1])
           {
               cout<<"("<<arr[j][0]<<","<<arr[j][1]<<")"<<" ";
               break;
           }
        }
    }
}
