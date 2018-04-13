#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin>>str;

    int c=str.find('0');

    if(c==-1)
        cout<<str.substr(1,str.size()-1)<<endl;
    else
    {
        str.erase(str.begin()+c);
        cout<<str<<endl;
    }

    return 0;
}








