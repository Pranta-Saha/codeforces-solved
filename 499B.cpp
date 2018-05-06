#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    map<string,string>mp;

    string first,second;

    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>first>>second;

        if(first.size()>second.size())
            mp[first]=second;
        else
            mp[first]=first;

    }

    while(n--)
    {
        cin>>first;

        cout<<mp[first]<<" ";
    }


    return 0;
}
