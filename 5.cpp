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

void allnegative(int arr[],int n)
{
    for(int i=0;i<n-1;i++ )
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<0)
            {
                swap(arr[i],arr[j]);
                break;
            }
        }
    }
}

int main()
{
     int a[] = { -1000, 11, 445,-1, 330, -3000 };
     int s=sizeof(a)/sizeof(a[0]);
     allnegative(a,s);
     for(int i=0;i<s;i++)
     {
         cout<<a[i]<<" ";
     }

     return 0;
}
