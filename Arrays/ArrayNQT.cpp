#include<bits/stdc++.h>
using namespace std;


void find(int arr[], int n){
    int large = 0;
    int small = INT_MAX;
     
     for(int i=0; i<n; i++){
        if(large<arr[i]){
        large = arr[i];
        }
     }
  
    for(int i=0; i<n; i++){
        if(small>arr[i])
        small = arr[i];
    }

    cout<<"Large Element: "<<large;
    cout<<"\nSmall Element: "<<small;
    
}



void seclargesmall(int arr[], int n){
    int small = INT_MAX, large = INT_MIN;
    int secsmall = INT_MAX, seclarge = INT_MIN;

    for(int k=0; k<n; k++){
        small = min(small,arr[k]);
        large = max(large, arr[k]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=small and arr[i]<secsmall)
        secsmall= arr[i];

        if(arr[i]!= large and arr[i]>seclarge)
        seclarge = arr[i];
    }

    cout<<"\nSecond Small Value: "<<secsmall;
    cout<<"\nSecond Large Value: "<<seclarge<<endl;
}





void reverse(int arr[], int n){

   int start = 0;
   int end = n-1;  
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"\n Reverse Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}




void reversearr(int arr[], int n, int start, int end){
    if(start<end){
     swap(arr[start], arr[end]);
     reversearr(arr, n,start+1, end-1);
    }   
   
}




void frequency(int arr[], int n){
   unordered_map<int, int> mp;
   for(int i=0; i<n; i++){
       mp[arr[i]]++;
   }
   for(auto it: mp){
    cout<<"\n"<<it.first<<":"<<it.second;
   }
}



void rearrange(int arr[], int n){
    sort(arr, arr+n);
    int l = n/2;
    int h = n-1;

    while(l<h){
       swap(arr[l], arr[h]);
       l++;
       h--;
    }
     cout<<"\n";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



void sum(int arr[], int n){
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    cout<<"\nSum of all the array elements: "<<sum;

    int sumbyaccumulate= accumulate(arr,arr+n,0);
    cout<<"\nSum by accumulate function:"<<sumbyaccumulate;
}



void avarage(int arr[], int n){
    int sum = accumulate(arr, arr+n, 0);
    double avg=0.0;
    avg = sum / (double)n;
    cout<<"\n Avg: "<<avg;

}



void getmedian(int arr[], int n){
    
    sort(arr, arr+n);
    double median=0;
    if(n%2==0){
        int ind1 = n/2-1;
        int ind2 = n/2;
        median = double(arr[ind1]+arr[ind2])/2;
    }
    else{
         median = double (arr[n/2]);
    }

    cout<<"\nMedian:"<<median;
}



void removeDupliSorted(int arr[], int n){
  
  int i= 0;
  for(int j=1; j<n; j++){
    if(arr[i]!= arr[j])
    {
        i++;
        arr[i]=arr[j];
    }
  }
  int k = i+1;
  cout<<"\nAfter Removing Duplicates: ";
  for(int i=0;i<k; i++){
    cout<<arr[i]<<" ";
  }
}




void removeDuplicateUnsorted(int arr[], int n){
    unordered_map<int,int>mp;

    cout<<"\nRemove Duplicates: ";
    for(int i=0; i<n; i++){
        if(mp.find(arr[i])!=mp.end())
        continue;
           
           cout<<arr[i]<<" ";
           mp[arr[i]]++;
    }
}





void repetedElm(int arr[], int n){
    unordered_map<int,int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    cout<<"\nRepeated Elem: ";
    for(auto it: mp){
        if(it.second >1)
        cout<<it.first<<" ";
    }
}




void nonrepeatedElm(int arr[], int n){
    unordered_map<int,  int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    cout<<"\nNonRepeating Elm: ";
    for(auto it: mp){
        if(it.second==1)
        cout<<it.first<<" ";
    }
}




void symmetricpairs(int p[][2], int n){
    int count =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(p[i][0]==p[j][1] and p[j][0]==p[i][1]){
               ++count;
               break;
               }
            
        }
    }
    cout<<"\n"<<count<<" pairs found";
}




void maxproduct(int arr[], int n){
   int ma= arr[0];
   int mi = arr[0];
   int res= arr[0];

   for(int i=1; i<n; i++){
     if(arr[i]<0)
     swap(ma, mi);

     ma = max(arr[i], ma*arr[i]);
     mi = min(arr[i], mi*arr[i]);

     res = max(res, ma);
   }
   cout<<"\nMaximum Product Subarray: "<<res;

}




void rotatearr(int arr[], int n, int k, string p){
    cout<<endl;
    int i;
    vector<int>ans;
    if(p == "left"){
       for( i=k; i<n; i++){
         ans.push_back(arr[i]);
       }
       for(i=0; i<k; i++){
         ans.push_back(arr[i]);
       }
    }
    else if(p == "right"){
       for(int i=k; i>=0; i--){
         ans.push_back(arr[i]);
       }
       for(int i=n-1; i>k; i--){
         ans.push_back(arr[i]);
       }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}






void equilibriumindex(vector<int>&a){
   int lsum=0;
   int rsum=0;
   int tsum=0;

   for(int i=0; i<a.size(); i++){
    tsum+=a[i];
   }
   rsum =tsum;

   for(int i=0; i<a.size();i++){
      rsum-=a[i];
      if(rsum==lsum){
           cout<<"\nEquilibrium index:"<<i;
           break;
      } 
      
      lsum+=a[i];   

   }
}





void bsearch(vector<int>a, int low, int high, int sElm){
    sort(a.begin(),a.end());
    while(low<=high)
    {  
        int mid = low+(high-low)/2;
        if(a[mid]==sElm) {
            cout<<"\nFound at index: "<<mid;
            break;
        }
        else if(sElm>=a[mid]){
            low = mid+1;
        }
        else {
        high = mid-1;
        }
    }

}





bool issubset(int a1[],int a2[], int n1, int n2){

    if(n1>n2) cout<<"False, one is not Subset of another!";
    
    unordered_map<int,int>mp;
    for(int i=0; i<n2; i++)mp[a2[i]]++;

    for(int i=0; i<n1; i++){
        if(mp[a1[i]]==1)
        return true;
    }
    return false;

}





void isbalance(vector<int>a){
    int l=0;
    int r=0;
    for(int i=0; i<a.size()/2; i++){
       l+=a[i];
    }
    for(int i=a.size()/2+1; i<a.size(); i++){
        r+=a[i];
    }
    if(l==r)cout<<"\nbalanced";
    else cout<<"\nNot Balanced";
}








int main()
{
    //-------------- INPUTS -------------
    int arr[]= {-2,-5,7,8,-4,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int array1[] = {8, 3, 2, 2, 1, 8, 6, 3, 9};
    int n1 = sizeof(array1)/sizeof(array1[0]);

    int array2[] ={2,2,2,2,4,4,5,6,6,7,7,7,7,7,9,9,9};
    int n2 = sizeof(array2)/sizeof(array2[0]);
     

    int pair[5][2] ={{2,3},{3,2},{4,1},{1,4},{4,1}};
    int psize=sizeof(pair)/sizeof(pair[0]); 
    int p=4;

    int arrdiff[]= {2,5,-7,-8,-4,1,0};
    int no = sizeof(arrdiff)/sizeof(arrdiff[0]);

    int arrdiff1[]= {2,5,-7,1,-8,-4,1,0,4,5,2};
    int no1 = sizeof(arrdiff1)/sizeof(arrdiff1[0]);

    vector<int>a= {3,5,4,7,1};
    int asize = a.size();

    // ------- function calls -------
    find(arr,n);
    seclargesmall(arr,n);
    reverse(arr, n);
    reversearr(array1,n1,0,n1-1);

    cout<<"\n Reverse Array Using Recursion: ";
     for(int i=0; i<n1; i++){
        cout<<array1[i]<<" ";
    }

    frequency(array1, n1);
    rearrange(arr,n);
    sum(array1, n1);
    avarage(arr,n);
    getmedian(arr,n);
    removeDupliSorted(array2,n2);
    removeDuplicateUnsorted(array1,n1);
    repetedElm(array1,n1);
    nonrepeatedElm(array1,n1);
    symmetricpairs(pair, psize);
    maxproduct(arrdiff,no);
    rotatearr(arrdiff,no,2,"right");
    equilibriumindex(a);
    bsearch(a,0,asize-1,3);
    bool sub = issubset(arrdiff,arrdiff1,no,no1);
    if (sub ==1) cout<<"\n Is Subset: Yes";

    isbalance(a);
}
