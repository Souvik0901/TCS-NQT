


#include<bits/stdc++.h>
using namespace std;


void InsertBegin(int a[], int n, int Elm)
{

  for(int i=n-1; i>=0; i--)
  {
           a[i+1] =a[i];
  }
   a[0]=Elm;
    
    for(int i=0; i<n+1; i++)
    {
        cout<<a[i] <<" ";
    }
    
}

void InsertEnd(int a[], int n, int Elm)
{
   a[n]=Elm;
   
   for(int i=0; i<=n; i++)
        cout<<a[i] <<" ";
    

}

void Insertatpos(int a[], int n, int Elm, int pos)
{
    for(int i=n; n>=pos;i--)
    {
        a[i] =a[i-1];
    }
    a[pos-1]=Elm;

     for(int i=0; i<=n; i++)
        cout<<a[i] <<" ";


}
int main()
{
    int Arr[]={27,8,9,2,3,4,5};
     int Arr1[]={27,8,9,2,3,4,5};
      int Arr2[]={27,8,9,2,3,4,5};
    int n =sizeof(Arr)/sizeof(Arr[0]);
    int n1 =sizeof(Arr1)/sizeof(Arr1[0]);
    int n2 =sizeof(Arr2)/sizeof(Arr2[0]);

    cout<<"Insert At begin:";
    InsertBegin(Arr,n,20);
    cout<<endl<<"Insert At End:";
    InsertEnd(Arr1,n1,20);
    cout<<endl<<"Insert At Position:";
    Insertatpos(Arr2,n2,5,4);


}
