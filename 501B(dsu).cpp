#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


        int n,i,j;
        cin>>n;
        string prev,now;
        map<string,string>mp;
        map<string,string>::iterator it;
        while(n--)
        {
                cin>>prev>>now;
                if(mp.find(prev)==mp.end())
                {
                        mp[now]=prev;
                }
                else
                {
                        mp[now]=mp[prev];
                        mp.erase(prev);
                }
        }
        cout<<mp.size()<<endl;
        for(it=mp.begin();it!=mp.end();it++)
        {
                cout<<it->second<<" "<<it->first<<endl;
        }

	return 0;
}
