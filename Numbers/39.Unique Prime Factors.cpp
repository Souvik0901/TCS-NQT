class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    set<int>s;
	    for(int i=2; i<=N; i++)
	    {
	         if(N%i==0)
	         {
	             while(N%i==0 and N>1)
	             {
	                 s.insert(i);
	                 N/=i;
	             }
	         }
	    }
	    
	    for(auto it: s)
	     ans.push_back(it);
	    
	    return ans;
	}
};
