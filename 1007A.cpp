#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    long long n,i,j,tmp;
    map<long long,long long>mp;
    map<long long,long long>::iterator it;
    multiset<long long>mst;
    multiset<long long>::iterator itst;

    cin>>n;

    while(n--)
    {
        cin>>tmp;
        mp[tmp]++;
    }

    for(it=mp.begin();it!=mp.end();it++)
        mst.insert(it->second);

    long long ans=0,mx=0;
    while(!mst.empty())
    {
        itst=mst.begin();
        ans+= ( (mst.size()-1)*(*itst-mx) );
        mx=*itst;
        mst.erase(*itst);
    }

    cout<<ans;



	return 0;
}
