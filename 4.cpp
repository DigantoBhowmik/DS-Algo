
//I am Noob Coder//
#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#define for1(i, n) for (int i = 0; i < (int)(n); i++)
#define for2(i, n) for (int i = 1; i <  (int)(n); i++)
#define sf(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,a) scanf("%d %d %d",&x,&y,&a)
#define sf4(x,y,a,b) scanf("%d %d %d %d",&x,&y,&a,&b)
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        sort(a,a+n);
    }
    
};

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        Solution ob;
        ob.sort012(a,n);

        for (int i = 0; i < n; ++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
     }

     return 0;
}
