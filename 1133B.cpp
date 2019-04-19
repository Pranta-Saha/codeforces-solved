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


        int n,i,j,k,cnt[102],ans=0;
        cin>>n>>k;
        memset(cnt,0,sizeof(cnt));
        for(i=1;i<=n;i++)
        {
                cin>>j;
                cnt[j%k]++;
        }
        //if(k%2==0) j=k-1;
        for(i=1;i<k;i++)
        {
                ans+=min(cnt[i],cnt[k-i]);
        }
        ans/=2;
        ans+=(cnt[0]/2);
        cout<<ans*2;


	return 0;
}
