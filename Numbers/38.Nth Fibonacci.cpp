
>> Optimized Solution :

         Time Complexity : 0(N)
         Space COmplexity : 0(1)
           
>> Code:    
class Solution{
public:
    int fib(int N){
        //code here
        if(N<=1)
        return N;
        
        if(N==2)
        return 1;
        
        int a = 1, b=1;
        int c;
        
        for(int i=3; i<=N; i++)
        {
            c=(a+b)%10;
            a=b;
            b=c;
        }
       
        return c;
    }
};


>> Recursive Approach:
  
       Time Complexity: 0(N^2)
       Space Complexity: 0(1)
         
>> Code:

#include<bits/stdc++.h>
using namespace std;

int Fibonacii(int n)
{  
    
    if(n<=1)
    {
      return n;
    }
    int last=  Fibonacii(n-1);
    int slast= Fibonacci(n-2);
  
      
    return  last+slast;
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
