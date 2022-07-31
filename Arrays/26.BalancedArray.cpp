
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int ls=0;
       int rs =0;
       
       for(int i=0; i<n/2; i++)
       {
           ls+=a[i];
           rs+=a[n-1-i];
       }
       return abs(ls-rs);
    }
};




