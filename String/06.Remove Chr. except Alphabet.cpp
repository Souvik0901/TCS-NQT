                   Time Complexity : 0(N)
                   Space Complexity : 0(N)
                     

    #include<bits/stdc++.h>
    using namespace std;
    string Solve(string k)
    {
       string ans;
       for(int i=0; i<k.size();i++)
       {
           if(k[i]>=65 and k[i]<=90 || k[i]>=97 and k[i]<=122)
           {
               ans.push_back(k[i]);
           }
       }
       return ans;
    }

    int main()
    {
        string k="Rajat Patidar hit a maiden century on IPL Eliminetor1";
        string k2="take12% *&u ^$#forward";
        cout<<Solve(k2);

    }
