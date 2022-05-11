

Solution 1:      
Using Two Nested For Loop

             
             Approach :
                         1. Make a visited array of type boolean and all elements are false.
                         2. Create a for loop for pointing a element in the array.
                         3. Initialize the count variable as 1
                         4. Run the 2nd loop for finding that element, if find then change visited index as true. and increse the count.
                         5. if the visited index is already true then skip the other steps.
                           
             Complexity :        
                           Time complexity :  0(N*N)    For traversing two for loop.
                           Space complexity : 0(N)     For extra boolean Array..

                           
Code 1:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Frequency(int A[], int n)
{
  
   vector<bool>visited(n,false);

     for(int i =0; i<n; i++)
     {
         if(visited[i]==true)     // Skip this ith element if already processed.
              continue;

         int count =1;
         for(int j =i+1 ; j<n ; j++)
         {
             if(A[i]==A[j])
             {
                 count++;
                 visited[j]= true;
             }     
         }
      cout<<A[i] <<" : "<<count <<endl;
     }  
}



int main()
{
   int A[] = {10, 4, 10, 4, 6, 6,4,1};
   int n = sizeof(A)/sizeof(A[0]);

   Frequency(A,n);
   return 0;
}





Solution 2 : Using  Map
                        
                        
                       Intitution : 
                                      We can use a map of value and frequency pair, in which we can easily update 
                                      the frequency of an element if it is already present in the map, 
                                      if it is not present in the map then insert it in the map with frequency as 1. 
                                       After completing all the iterations, print the value frequency pair. 

                       Approach :
                                    1. Take a unordered map <int, int > data type .
                                    2. using a for loop iterate the array.
                                    3.If the element is not present in the map then return the frequency 1 , either existing the frequency by 1.
                                    4. print the pair values.

                     Complexity :
                                      Time Complexity : 0(N)
                                     Space Complexity : 0(1)



Code 2:


#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> mp;
    for(int i=0; i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto s: mp)
    {
        cout<<s.first<<" : "<<s.second<<endl;
    }
}

int main()
{
    int arr[] = {10, 7, 10, 7, 8};
    int n =sizeof(arr)/sizeof(arr[0]);
    Frequency(arr,n);
}
