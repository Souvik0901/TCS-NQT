


solution-1 :  Brute Force


            Approach :
                            1. Sort the integer array first in ascending order.
                            2. Then Return elemnt present at 2nd index is 2nd smallest.
                            3. Element present at 2nd index from last is the 2nd largest.
                              
            Complexity:  
                           Time complexity :  O(NlogN), For sorting the array
                           Space Complexity: O(1)
                              
                              
   CODE 1 
                              
          
     
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SecondSmallLarge(int a[], int n)
{

    if(n==0|| n==1)
    {
        cout<<-1<<" "<<-1;
    }
        sort(a,a+n);
        int secondsmall=a[1];
        int secondlarge = a[n-2];

        cout<<"2nd Smallest Element : "<<secondsmall<<endl;
        cout<<"2nd Largest Element : "<<secondlarge;

}




int main()
{
    int a[] = {19, 0, 3, 8,12, 82, 33, 9};
    int n = sizeof(a)/sizeof(a[0]);
    SecondSmallLarge(a,n);
}





Solution- 2: Better Solution 

     
     
                Approach : 
                             1.     Find the smallest and largest element in the array in a single traversal.
                             2.     After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
                             3. Similarly, we would find the largest element which is just smaller than the largest element we just found
                             4. Indeed, this is our second smallest and second largest element.
                               
                Complexity :
                            
                             Time complexity :  O(N), We do two linear traversals in our array 
                             Space Complexity: O(1)
             
                               
                               
                               
                               
      CODE 2
                               
                               
        
                               
         
#include<iostream>
#include<bits/stdc++.h>

using namespace std;




void getelem(int arr[], int n)
{

  int small = INT_MAX, second_small= INT_MAX;
  int large = INT_MIN, second_large= INT_MIN;

  for( int i =0; i<n ; i++)
  {
       small=min(small,arr[i]);
       large=max(large,arr[i]);
      
  }

  for(int j =0; j<n; j++)
  {
      if(arr[j]<second_small and arr[j]!=small)
         second_small=arr[j];
      if(arr[j]>second_large and arr[j]!=large)
         second_large= arr[j];
  }

   cout<<"2nd Small Value : "<<second_small<<endl;
   cout<<"2nd Large :"<<second_large;



}
int main()
{

  int arr[]={23,9,8,4,8,3,0};
  int n = sizeof(arr)/sizeof(arr[0]);

   getelem(arr,n);
  



}




