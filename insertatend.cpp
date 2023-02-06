#include <iostream>

using namespace std;

int main()
{
         cout<<"Insert at end of array: "<<endl;

    cout<<"size of array:";
     int n;
     cin>>n;
     int a[n];
     int i,e;
     cout<<"element in array :";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     
     cout<<"enter element you want to enter at end:";
     cin>>e;
     
     n=n+1;
     
     
     a[n-1]=e;
     
     cout<<"print array :";
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     
    return 0;
}