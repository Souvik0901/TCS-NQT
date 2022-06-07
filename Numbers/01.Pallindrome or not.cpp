
                              Time Complexity : 0(logN)
                                Space Complexity : 0(1)
#include<bits/stdc++.h>
using namespace std;

int myreverse(int x)
{
    int rem=0, y=0;
    while(x>0)
    {
        rem =x%10;
        y =y*10+rem;
        x=x/10;
    }
    return y;
}

int main()
{
    int x= 12321;
    
    int y= myreverse(x);
    if(x==y)
     cout<<"Pallindrome\n";
    else
     cout<<"Not Pallindrome\n";

}
