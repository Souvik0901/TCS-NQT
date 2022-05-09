
Solution 1 :  Sorting

    Institution : We can Sort the elemnents in asscendimg order , hence the smallest element will be in the 0th index.
      
    Approach :   
                 1. Sort the Array in ascending order .  ( Two methods - you can sort using vector STL.
                                                                   - and you can create your own Sorting Function like Insert sort.
                 2. Then return the 0th index value.
                                                          
     Time Complexity: O(N*log(N))
     Space Complexity: O(1)
      
      
Code 1 :

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int FINDSMALL(vector<int>&nums)
{
  sort(nums.begin(), nums.end());
  return nums[0];

}


int main()
{

    vector<int> nums1 ={2,9,3,1,8,9};
    vector<int> nums2 = {8, 42, 7 , 41, 7, 66};
   
   cout<<"Smallest Element "<< FINDSMALL(nums1)<<endl;
   cout<<"Smallest Element "<<FINDSMALL(nums2);
    
}
   
                                                          
                                                          
                                                          

Solution 2 : Using A min Variable

    Institution : We can create a min value which will update when the others elements is less than this min value.
    Approach : 
                  1. basically , we will create a random value of array as a min value. like a[0] is min value.
                  2. using for loop compare with other elements its less than or not.
                  3. if any value less a[0] then change it to a min value.
                  4. lastly return .
                                                          
           Time Complexity : O(N)
           Space Complexity: O(1)
                                                          
    
                                                          
Code 2:
                               
#include<iostream>
using namespace std;

int FindSmall(int A[], int n)
{

    int update= A[0];
    for(int i=1; i<n ; i++)
    {
        if(A[i]<update)
           update = A[i];
    }
    return update;

}
int main()
{
    int arr1[20]={6, 2, 71, 9, 21, 7};
    int n=6;

    cout<<"Smallest  Element  :"<<FindSmall(arr1,n);

}
                                                          
                                                          
                                                          
                                                          
        
             
