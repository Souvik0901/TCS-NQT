


Solution :



                            Approach :
                                         1. Sort the Array.
                                         2. Print the 1st half in asscending order. ( index 0 to (n/2)-1 )
                                         3. Print the 2nd half in decreasing order. ( index n-1 to n/2 )
                                           
                            Complexity :
                                        
                                         Time Complexity :  0(NlogN)+0(N)      ---- NlogN for Sorting, and 0(N) for printing.
                                          Space Complexity : 0(1)
                                            
                                            
Code :
     
#include<bits/stdc++.h>
using namespace std;


int Rearrenge(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    for(int i =0; i<nums.size()/2; i++)
    {
        cout<<nums[i] <<" ";
    }
    for(int i=nums.size()-1; i>=nums.size()/2; i--)
    {
        cout<<nums[i]<<" ";
    }
    return 0;

}
int main()
{
   vector<int> Arr ={8,3,7,9,2,16,5,4};
   Rearrenge(Arr);
   
}


Approach : 2
  
   Code:
   #include<bits/stdc++.h>
using namespace std;

void func(int a[], int n)
{
     sort(a, a+n);
     int l =n/2;
     int h = n-1;
     while(l<h)
     { 
        swap(a[l],a[h]);
        l++;
        h--;
     }
     
}

int main()
{
     int arr[]={7,9,0,2,3,7};
     int n = sizeof(arr)/sizeof(arr[0]);
     func(arr, n);
     for(int i=0; i<n; i++)
     {
        cout<<arr[i]<<" ";
     }
}
                                          
