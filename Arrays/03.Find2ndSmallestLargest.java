class Compute 
{
    public long[] minAnd2ndMin(long a[], long n)  
    {
         Arrays.sort(a);
         long [] l=new long[2];
         int min = Integer.MAX_VALUE;
         int smin = Integer.MAX_VALUE;
         for(int i =0; i<(int)n; i++)
         {
             min = (int)Math.min(a[i],min);
         }
         for(int i=0; i<(int)n; i++)
         {
             if(a[i]!=min)
               smin = (int)Math.min(a[i],smin);
         }
        
        if(smin==Integer.MAX_VALUE || min==Integer.MAX_VALUE)
          l[0]=-1;
        else
           l[0]=min;
           l[1]=smin;
           
         return l;
    }
}
