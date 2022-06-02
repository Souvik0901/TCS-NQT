
Solution 1:

Code:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,9,8,3,4,6};
    int k=6;
    for(int i=0; i<6;i++)
    {
        if(arr[i]==k)
          cout<<i;
    }
}




Solution 2 : Binary Search
                  Time Complexity: 0(logN)
                  Space : 0(1)
                    
  
 Code :

#include<bits/stdc++.h>
using namespace std;

 int Bsearch(int arr[], int s,int start, int end)
 {
     int ans;
    int mid= start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]==s)
        {
            ans= mid;
            break;
        }
        else if(arr[mid]<s)
            return Bsearch(arr,s,mid+1,end);
        else if(arr[mid]>s)
            return Bsearch(arr,s,start,end-1);
    }
    return mid;
    
 }

int main()
{
    int arr[]={2,9,23,58,76,81};
    int Search=23;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Bsearch(arr,Search,0,n-1);

}
