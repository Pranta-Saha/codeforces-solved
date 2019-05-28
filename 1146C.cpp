#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v,lo,hi,newdist;
        cin>>t;
        while(t--)
        {
                cin>>n;
                int dist=0;
                for(i=0;i<8;i++)
                {
                        int cnt=0;
                        for(j=1;j<=n;j++) if((j>>i)&1) cnt++;
                        if(cnt==0 || n-cnt==0) continue;
                        cout<<cnt<<' '<<n-cnt<<' ';
                        for(j=1;j<=n;j++) if((j>>i)&1) cout<<j<<' ';
                        for(j=1;j<=n;j++) if(!((j>>i)&1)) cout<<j<<' ';
                        cout<<endl;
                        //cout.flush();
                        cin>>newdist;
                        dist=max(dist,newdist);
                }
                cout<<-1<<' '<<dist<<endl;
        }
	return 0;
}
