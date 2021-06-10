#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Position:";
    cin>>pos;
    cout<<"Enter Number:";
    cin>>num;
    for(int i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
