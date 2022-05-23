

Solution 1:
       
        #include<bits/stdc++.h>
          using namespace std;


          string ispallindrome(string p)
          {
               string k = p;
               reverse(p.begin(), p.end());
               if(k==p)
                  return "YES";
               else
                   return "NO";

          }

          int main()
          {
               int t;
               cin>>t;
               while(t--)
               {
                   string p;
                   cin>>p;
                   cout<<ispallindrome(p);
               }






Solution 2:
           
            #include<bits/stdc++.h>
            using namespace std;
            bool pallindrome(string p)
            {
                for(int i=0; i<p.length()/2;i++)
                {
                    if(p[i]!=p[p.length()-i-1])
                       return false;
                }
                return true;
            }


            int main()
            {
               string p ="xyzeyx";
               bool ans =pallindrome(p);
                if(ans==true)
                   cout<<"Pallindrome";
                else
                   cout<<"Not Pallindrome";


            }
