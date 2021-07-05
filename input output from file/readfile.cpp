#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    ifstream myfile;
    myfile.open("file.txt");
    cout<<"Reading from a file"<<endl;
    myfile>>s;
    ofstream myfile1;
    myfile1.open("output.txt");
    cout<<s<<endl;

    char a[7]={'+','-','*','/','%','=','!'};
    cout<<"Operator: ";
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<7;j++)
        {
            if(s[i]==a[j])
            {
                cout<<a[j]<<" ";
                myfile1<<a[j]<<" ";
            }
        }
    }
    myfile.close();





    myfile1.close();

    return 0;
}
