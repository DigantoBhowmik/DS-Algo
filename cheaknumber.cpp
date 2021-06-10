#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i])==false)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"It's numerical";
    }
    else
    {
        cout<<"It's not numerical";
    }
    return 0;
}
