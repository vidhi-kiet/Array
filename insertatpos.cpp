#include <iostream>

using namespace std;

int main()
{
         cout<<"Insert at position of array: "<<endl;

    cout<<"size of array:";
     int n;
     cin>>n;
     int a[n];
     int i,e,pos;
     cout<<"element in array :";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     
     cout<<"enter element you want to enter at position:";
     cin>>pos;
     cout<<"enter element:";
     cin>>e;
     for(i=n;i>=pos;i--)
     {
         a[i]=a[i-1];
     }
     a[pos]=e;
     n=n+1;
     
     

     cout<<"print array :";
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     
    return 0;
}