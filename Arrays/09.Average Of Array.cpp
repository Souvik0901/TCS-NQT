
         Complexity :
                  Time Complexity : 0(N)
                  Space Complexity : 0(1)

#include<iostream>

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>arr={1, 7, 5,6, 2};
   int n = arr.size();

   float sum =0.0;

   for(int i =0; i<n; i++)
   {
       sum = sum +(float)arr[i];
   }
   float avg = sum/n;

   cout<<avg;

}
