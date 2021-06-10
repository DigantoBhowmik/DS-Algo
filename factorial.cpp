#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter ";
    cin>>n;
    int fac=1;
    for(int i=n;i>1;i--)
    {
        fac*=i;
    }
    cout<<fac<<endl;
    return 0;
}
