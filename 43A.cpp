#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    int n,mx=-1;
    string str,team;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(mp.find(str)!=mp.end())
        {
            mp[str]++;
            if(mx<mp[str])
            {
                mx=mp[str];
                team=str;
            }
        }
        else mp[str]=1;
    }

    if(mx==-1) cout<<str<<endl;
    else cout<<team<<endl;



    return 0;
}
