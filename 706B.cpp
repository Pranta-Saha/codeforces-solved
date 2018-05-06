#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp,q,i,cntt[100005],cnt(0),mx=0;

    cin>>n;

    map<int,int>mp;

    for(i=0;i<n;i++)
    {
        cin>>tmp;

        mx=max(mx,tmp);

        if(mp.find(tmp)!=mp.end())
        {
            mp[tmp]++;
        }
        else
        {
            mp[tmp]=1;
        }

    }

    for(i=0;i<=mx;i++)
    {
        if(mp.find(i)!=mp.end())
        {
            cnt+=mp[i];
        }

        cntt[i]=cnt;
    }

    cin>>q;

    while(q--)
    {
        cin>>tmp;

        if(tmp>mx)
            cout<<cnt<<endl;
        else
            cout<<cntt[tmp]<<endl;
    }

    return 0;
}
