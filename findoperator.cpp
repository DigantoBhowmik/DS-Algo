#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    char a[7]={'+','-','*','/','%','=','!'};
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<7;j++)
        {
            if(s[i]==a[j])
            {
                cout<<a[j]<<" ";
            }
        }
    }
    return 0;
}

