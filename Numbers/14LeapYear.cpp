

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int year=2024;
    if(year%4==0 and year%100!=0 || year%400==0)
    {
        cout<<"Yes, LeapYear";

    }
    else
        cout<<"Not, LeapYear";
}
