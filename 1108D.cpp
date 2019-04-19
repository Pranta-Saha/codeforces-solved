#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;

        map<char,int>mp;
        mp.insert({'R',0});
        mp.insert({'B',1});
        mp.insert({'G',2});
        char pm[3]={'R','B','G'};

        string str;
        cin>>n>>str;
        for(i=1;i<n-1;i++)
        {
                if(str[i-1]==str[i] )
                {
                        tcs++;
                        if(str[i-1]==str[i+1])
                                str[i]=  pm[  (mp[str[i-1]]+1)%3 ];
                        else
                                str[i]=pm[ 3-mp[str[i-1]]-mp[str[i+1]] ];                }
        }
        if(n>1 && str[n-1]==str[n-2])
        {
                tcs++;
                str[n-1]=  pm[  (mp[str[n-1]]+1)%3 ];
        }
        cout<<tcs<<endl<<str;

	return 0;
}
