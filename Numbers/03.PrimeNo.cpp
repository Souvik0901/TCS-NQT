
Solution 1:
                        Time Complexity : 0(N)
                          Space Complexity : 0(1)
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2; i<n;i++)
    {
        if((n%i)==0)
           return false;
    }
    return true;
}

int main()
{
    int n=11;
    bool k =isprime(n);
    if(k==true and n!=1)
    {
        cout<<"Prime\n";
    }
    else
    {
        cout<<"Not Prime\n";
    }

}



Solution 2: 
              Optimize Approach
                Time Complexity : 0(N^(1/2))
                Space Complexity :  0(1)
                  
  
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2; i<sqrt(n);i++)
    {
        if((n%i)==0)
           return false;
    }
    return true;
}

int main()
{
    int n=11;
    bool k =isprime(n);
    if(k==true and n!=1)
    {
        cout<<"Prime\n";
    }
    else
    {
        cout<<"Not Prime\n";
    }

}




Approach 3: GFG 


class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==1) return 0;
        
        int count =0;
        for(int i=1; i<=sqrt(N); i++)
          if(N%i ==0)
             count++;
             
        if (count==1)
          return 1;
        else
          return 0;
    }
};



