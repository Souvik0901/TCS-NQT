
                Time Complexity : 0(N)
                Space Complexity : 0(1)

#include<bits/stdc++.h>
using namespace std;
void ispallindrome(int x)
{
    int rem =0, y=0;
    int dummy =x;
    while(x>0)
    {
       rem = x%10;
       y = y*10 + rem; 
       x=x/10;
    }
    if(dummy==y)
      cout<<dummy<<" ";
    

}
int main()
{
    int min =100;
    int max= 1000;
    
    for(int i=min; i<max;i++)
    {
       ispallindrome(i);
    }
}
