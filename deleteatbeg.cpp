#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n];
     int i;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(i=0;i<n-1;i++)
     {
         a[i]=a[i+1];
     }
     n--;
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
    return 0;
}