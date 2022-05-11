

Solution 1 :       Using For Loop



                       Complexity :
                                     Time Complexity : 0(N)
                                     Space Complexity : 0(1)

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr ={2, 8, 9, 0, 3, 7};
    int n = arr.size();
    int sum =0;

    for(int i =0; i<n; i++)
    {
         sum =sum+(int)arr[i];
    }

    cout<<"Total Sum : "<<sum;
}




Solution 2 : Using Library Function

      
           Approach :     For C++: “accumulate” is used to calculate the sum of all the elements in the array.  
        
           Complexity : 
                         Time Comlexity : 0(N)
                         Space Complexity :0(1)
 
                           
                           
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int nums[] ={ 7, 8,18,8,1, 9,0,6 } ;
    int n = 8;
    int initial =0;
    cout<<accumulate(nums,nums+n,initial);
}




