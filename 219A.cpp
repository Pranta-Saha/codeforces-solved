#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,i;

    string str,newstr;

    cin>>k>>str;

    int len=str.size();

    map<char,int>mp;
    map<char,int>::iterator it;

    for(i=0;i<len;i++)
        if(mp.find(str[i])!=mp.end())
            mp[str[i]]++;
        else
            mp[str[i]]=1;

    for(it=mp.begin();it!=mp.end();it++)
    {
        if((it->second)%k!=0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }

    for(i=1;i<=k;i++)
    {
        for(it=mp.begin();it!=mp.end();it++)
        {
            newstr.append((it->second/k),it->first);
        }
    }

    cout<<newstr<<endl;


    return 0;
}
