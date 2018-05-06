#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[2001],arr[2001]={},i,nn;

    map<int ,int>mp;
    map<int ,int>::iterator it;

    cin>>n;  nn=n;

    for(i=1;i<=n;i++)
    {
        cin>>ar[i];

        if(mp.find(ar[i])!=mp.end())
            mp[ar[i]]++;
        else
            mp[ar[i]]=1;
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        arr[it->first]=n-it->second+1;

        n=n-it->second;
    }

    for(i=1;i<=nn;i++)
        cout<<arr[ar[i]]<<" ";


    return 0;
}
