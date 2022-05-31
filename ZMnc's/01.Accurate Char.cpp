
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.length()==0)
       cout<<"-1";
    else
    {
    set<char>st;

    for(int i=0; i<n; i++)
        st.insert(s[i]);

      int k= st.size();
    
    cout<< k;
    }

}
