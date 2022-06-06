
                               Time Complexity :0(NlogN)
                                Space Complexity:  0(1)
#include<bits/stdc++.h>
using namespace std;

string MYsort(string str)
{
    sort(str.begin(),str.end());
    return str;
}

int main()
{
   string str="robot";  
   cout<<"After Sorting the charracters in string : ";
  cout<< MYsort(str);
}
