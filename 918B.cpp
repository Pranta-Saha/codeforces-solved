#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;

    map<string,string> mp;

    cin>>n>>m;

    string comand,ip;

    while(n--)
    {
        cin>>comand>>ip;

        ip+=';';

        mp[ip]=comand;

    }

    while(m--)
    {
        cin>>comand>>ip;

        cout<<comand<<" "<<ip<<" #"<<mp[ip]<<endl;

    }

    return 0;
}
