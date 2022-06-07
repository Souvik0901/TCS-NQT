

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
