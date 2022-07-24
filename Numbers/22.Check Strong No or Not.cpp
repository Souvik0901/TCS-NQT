

Approach :
        Time Complexity:  0(N*M),   Where N is the no. of digit, M is the time taken for compute the factorial of the digit.
        Space COplexity:  0(1)
Code:         
#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if(num<=1)
     return 1;

    return num*fact(num-1);
}

bool isstrong(int n)
{
    int temp =n;
    int sum =0;
    
    while(n>0){
    int re= n%10;
    sum +=fact(re);
    n/=10;
    }

    if(sum==temp) return true;
    else return false;
}
int main()
{
    int n= 145;
    if(isstrong(n)==true)
      cout<<"Yes It's a Strong No.";
    else 
      cout<<"Nope ! it's not a Strong No.";
}


