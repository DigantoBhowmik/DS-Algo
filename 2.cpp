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

void maxElement(int arr[],int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
}
void minElement(int arr[],int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<min<<endl;
}
int main()
{
     int a[] = { 1000, 11, 445,1, 330, 3000 };
     int s=sizeof(a)/sizeof(a[0]);
     maxElement(a,s);
     minElement(a,s);

     return 0;
}
