
Solution 1: 
               Time Complexity : 0(N), since the total number of iterations required is the number of characters in a string.
               Space Complexity : 0(N), for extra vector.
                 
                 
        #include<bits/stdc++.h>
        using namespace std;

        string Remove(string st)
        {
            vector<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
            for(int i=0; i<st.length();i++)
            {
                if(find(vowels.begin(),vowels.end(),st[i])!=vowels.end())
                {
                    st= st.substr(0,i)+st.substr(i+1);
                    i--;
                }
            }
            return st;
        }


        int main()
        {
           string k="He is a 4star Coder in Codechef";

           cout<<Remove(k);
        }



solution 2:
         
             Time Complexity : 0(N), since the total number of iterations required is the number of characters in a string
             Space Complexity : 0(1)
               

        #include<bits/stdc++.h>
        using namespace std;
        string Remove(string st)
        {
           for(int i=0; i<st.length();i++)
           {
               if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='O'||st[i]=='U'||st[i]=='I')
               {
                   st =st.substr(0,i)+st.substr(i+1);
                   i--;
               }
           }
            return st;
        }


        int main()
        {
           string s="Take u Forward";
           cout<<Remove(s);
        }
