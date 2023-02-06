/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
         cout<<"Insert at beginging of array: "<<endl;

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
     
     cout<<"enter element you want to enter at beginging:";
     cin>>e;
     
     n=n+1;
     for(i=n;i>1;i--)
     {
         a[i-1]=a[i-2];
         
     }
     a[0]=e;
     
     cout<<"print array :";
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     
    return 0;
}