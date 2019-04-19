#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

int fun(string s,int n,int k, char c)
{
        int cnt=0,lo=0,hi=1,mx=0;
        if(s[lo]==c) cnt++;
        if(cnt<=k) mx=1;
        if(s[hi]==c) cnt++;
        if(cnt<=k) mx=2;
        while(hi<=n-2)
        {
                if(cnt<=k)
                        {if(s[++hi]==c) cnt++;}
                else
                        {if(s[lo++]==c) cnt--;}
                if(cnt<=k) mx=max(hi-lo+1,mx);
        }
        return mx;
}

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        string str;
        cin>>n>>k>>str;
        if(n==1) cout<<1;
        else cout<<max(fun(str,n,k,'b'),fun(str,n,k,'a'));
	return 0;
}
