#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,ans=0,tmp,mx=INT_MIN;

    map<char,int> mp;

    string str;

    cin>>str>>k;

    for(i=0;i<26;i++)
    {
        cin>>tmp;
        mx=max(mx,tmp);
        mp['a'+i]=tmp;
    }

    int len=str.size();

    for(i=0;i<len;i++)
    {
        ans+=mp[str[i]]*(i+1);
    }

    for(i=len+1;i<=(len+k);i++)
    {
        ans+=mx*i;
    }

    cout<<ans<<endl;

    return 0;
}
