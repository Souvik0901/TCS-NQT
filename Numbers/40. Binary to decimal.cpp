
    int binary_to_decimal(string str) {
       int sum =0;
       int j=0;
       for(int i=str.length()-1; i>=0;i--)
       {   
           if(str[i]=='1') sum+= pow(2,j);
           j++;
       }   
       return sum;
    }
