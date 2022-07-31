Optimized Approach:
       Time Complexity: 0(N)
       Space Complexity: 0(N)

string isSubset(int a1[], int a2[], int n, int m)
{
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[a1[i]]=1;
    }
    for(int i=0; i<m; i++)
    {
        if(mp[a2[i]]!=1)
        return "No";
    }
    return "Yes";
    
}



Brute Fore Approach:
     Time complexity: 0(N*N)
     Space Complexity:0(1)
         
string isSubset(int a1[], int a2[], int n, int m)
{
    if(n<m)
      return "No";
      
    int count =0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a2[j]==a1[i])
             count++;
        }
    }
    if(count==m)
      return "Yes";
    else
      return "No";
    
}
