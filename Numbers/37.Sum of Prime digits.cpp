

class Solution{
public:

    bool isprime(int n)
    {
        if (n==1 || n==0)
        return false;
        
        int count =1;
        for(int i=2; i<n; i++)
         { 
             if(n%i==0)
             count++;
         }
         if(count==1)
          return true;
         else
          return false;
            
    }
    
    int primeSum(int N)
    {
        // code here
        int sum=0;
        while(N>0)
        {
            int re = N%10;
            if(isprime(re))
              sum+=re;
            N/=10;
        }
        return sum;
    }
};
