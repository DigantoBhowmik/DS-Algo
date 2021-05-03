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

void reverseWord(string str)
{
    for(int i=str.size()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
int main()
{
     string s;
     cin>>s;
     reverseWord(s);


     return 0;
}
