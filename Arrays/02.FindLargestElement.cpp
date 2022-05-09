

Solution 1 :  Sorting

    Institution : We can Sort the elemnents in asscendimg order , hence the smallest element will be in the 0th index.
      
    Approach :   
                 1. Sort the Array in ascending order .  ( Two methods - you can sort using vector STL.
                                                                   - and you can create your own Sorting Function like Insert sort.
                 2. Then return the (n-1) index value.
                                                          
     Time Complexity: O(N*log(N))
     Space Complexity: O(1)
      
      
Code 1 :

#include<bits/stdc++.h>

using namespace std;

int FINDLARGE(vector<int> &nums)
{
   sort(nums.begin(), nums.end());
    return nums[nums.size()-1];


}

int main()
{
    vector<int>nums1= {4, 7 ,8 ,3 ,2 , 89 , 21 };
    vector<int>nums2 ={ 2, 8 ,4 ,67 ,93};
    vector<int>nums3 = {1,7777, 1 ,2, 3 ,5 };

    cout<<"Large value : "<<FINDLARGE(nums1)<<endl;
    cout<<"Large value : "<<FINDLARGE(nums2)<<endl;
    cout<<"Large value : "<<FINDLARGE(nums3);

    return 0;

}
   
                                                          
                                                          
                                                          

Solution 2 : Using A max Variable

    Institution : We can create a max value which will update when the others elements is less than this max value.
    Approach : 
                  1. basically , we will create a random value of array as a max value. like a[0] is min value. 
                                                           (In this code we are write as update)
                  2. using for loop compare with other elements its greater than or not.
                  3. if any value greater then a[0] change it to a max value.
                  4. lastly return .
                                                          
           Time Complexity : O(N)
           Space Complexity: O(1)
                                                          
    
                                                          
Code 2:
                               
#include<iostream>
using namespace std;

int FindLarge(int A[], int n)
{

    int update= A[0];
    for(int i=1; i<n ; i++)
    {
        if(A[i]>update)
           update = A[i];
    }
    return update;

}
int main()
{
    int arr1[20]={6, 2, 71, 9, 21, 7};
    int n=6;

    cout<<"Largest  Element  :"<<FindLarge(arr1,n);

}
                                                          
                                                          
     
