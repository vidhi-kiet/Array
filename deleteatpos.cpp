#include <iostream>

using namespace std;

int main()
{
    cout<<"size of array:";
    int n;
    cin>>n;
    int a[n];
    int i,pos;
    cout<<"delete element at pos:"<<endl;
    cout<<"enter element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"pos:";
    cin>>pos;
     // Shift all elements after the given index position 
    // to left by 1 position
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}