
//Iterative Approach:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n =8;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    
    for(int i=2; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}



//Recursive Approach:
#include<bits/stdc++.h>
using namespace std;

int Fibonacii(int n)
{  
    
    if(n<=1)
    {
      return n;
    }
    
     return Fibonacii(n-1)+Fibonacii(n-2);
}


int main()
{
   int n= 8;
   int i=0;
   while(i<n)
   {
    cout<<Fibonacii(i)<<" ";
    i++;
   }
   
}
