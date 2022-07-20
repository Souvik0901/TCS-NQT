

#include<bits/stdc++.h>
using namespace std;

bool ispallindrome(string str,int i)
{
    if(i>= str.size()/2)
    {
       return true;
    }
    
    if(str[i]!=str[str.size()-i-1])
    return false;
    else
    return true;


}

int main()
{
    string str="Kolkata";
    if(ispallindrome(str, 0)==1)
    cout<<"It's a pallindrome String";
    else
    cout<<"It's Not a pallindrome";
}
