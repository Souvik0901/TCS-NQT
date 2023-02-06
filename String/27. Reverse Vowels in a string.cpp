class Solution {
public:
    string reverseVowels(string s) {
        int start =0;
        int end = s.length()-1;

        while(start<end)
        {
            if(isvowel(s[start]) and isvowel(s[end]))
            {
                swap(s[start++],s[end--]);
            }
            else if(isvowel(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }

        
        }
        return s;
    }

    bool isvowel(char c)
    {
        if(c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return true;
        }
        return false;
    }
};
