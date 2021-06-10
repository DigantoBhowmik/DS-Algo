#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]=a[n-1];
    for(int i=0;i<=j;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
