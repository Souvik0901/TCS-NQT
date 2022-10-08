Solution 1 :  Using A Diff Array
                     
                     
                     Approach :     
                                 1. Initialize a empty array Arr[] of same size n .
                                 2. Storing the elements in the array in oposite direction.
                                   
                           
                     Time Complexity : 0(N) for single pass, for reversing array.
                     Space Complexity : 0(N) for Extra Array Used.

Code 1:


#include<iostream>
using namespace std;

void ReverseArray(int A[], int n)
{
    int Arr[n];

    for(int i =n-1; i>=0; i--)
    {
       Arr[n-i-1]=A[i];
    }

    for(int i =0; i<n; i++)
    {
        A[i] =Arr[i];
    }


}


int main()
{
   int Array[]= {10, 20, 30, 40, 50};
   int n = sizeof(Array)/sizeof(Array[0]);
   ReverseArray(Array,n);
   cout<<"Ans :";
   for(int i =0; i<n; i++)
   {
       cout<<Array[i] << " ";
   }


}




--------------------------------------------------------------------------------------------------------------------------------------------------------------



Solution 2 : Recursive Approach
                   
                   Approach : 
                                1. Create a Function which takes start and end index as parameter.
                                2. Then  Swap elements present at index start and end, until  start > end  using Recursive Call.
                   
                  Complexity :
                                  
                              Time Complexity : 0(N)
                              space Complexity : 0(1)
         

Code 2 :


#include<iostream>
using namespace std;


void Reverse(int A[], int start, int end)
{
    
    if(start <end)
       {
           swap(A[start],A[end]);
           Reverse(A,start+1,end-1);
       }


}

int main()
{
   int arr[] = {1,5,9,3,22,44};
   int n = sizeof(arr)/sizeof(arr[0]);

   Reverse(arr,0,n-1);
   for(int i =0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
}




-------------------------------------------------------------------------------------------------------------------------------------------------------------

Solution 3 : Space optimized Iterative 

               Complexity :      
                          Time Complexity: O(n), single-pass involved.
                          Space Complexity: O(1) 

                    
Code 3 :

#include<iostream>

using namespace std;


void Reverse(int A[], int n)
{
   
   int start = 0;
   int end = n-1;

   while(start <end)
   {
       swap(A[start], A[end]);
       start++;
       end--;
   }
   

}


int main()
{
    int A[]= {88, 7, 22, 4 , 51, 8, 1};
    int n = sizeof(A)/sizeof(A[0]);
    Reverse(A,n);

    for(int i =0; i<n; i++)
    {
        cout<<A[i] <<" ";
    }

}


---------------------------------------------------------------------------------------------------------------------------------------------------
Using vector Array:

#include<bits/stdc++.h>
using namespace std;


void RevArr(vector<int>&nums)
{
   int p1=0;
   int p2=nums.size()-1;
   while(p1<p2)
   {
      swap(nums[p1],nums[p2]);
       p1++;
       p2--;
   } 


}


int main()
{
   vector<int>num={2,9,1,2,33,8,0};
   RevArr(num);
   for(int i=0; i<num.size();  i++)
   {
     cout<<num[i]<<" ";
   }
}


