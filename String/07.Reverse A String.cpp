 Solution 1:   using reverse() function.
   
          #include<bits/stdc++.h>
          using namespace std;

          int main()
          {
              string s="Kolkata is our home town";
              reverse(s.begin(),s.end());
              cout<<s;
          }




Solution 2 : Using Swap.

        #include<bits/stdc++.h>
        using namespace std;
        string reverse(string st)
        {

            int i=0;
            int j=st.size()-1;
            while(i<j)
            {
                swap(st[i],st[j]);
            i++;
            j--;
            }

            return st;
        }

        int main()
        {
            string st="One day definitly  I Will select an employee for ASE Role of Accenture";
            cout<<reverse(st);
        }




Solution 3:  Using Stack.
  
        #include<bits/stdc++.h>
        using namespace std;

        int main()
        {
            string s="Kolkata its a loveble city";
            stack<char>st;

            for(int i=0; i<s.length();i++)   //Insert the string in to stack
            {
                st.push(s[i]);  
            }

            while(!st.empty())
            {
                int j=0;
               char elm= st.top();
               st.pop();
               s[j]=elm;
               j++;

            }
            cout<<s;
        }
