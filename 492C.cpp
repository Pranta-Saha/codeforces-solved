#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> pii;
typedef pair<ll,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        ll n,i,j,t,tcs=0,k,m,u,v,ans=0;
        ll r,avg,total_grade=0,a,b;
        cin>>n>>r>>avg;

        priority_queue<pii,vector<pii>,greater<pii>>pq;

        for(i=0;i<n;i++)
        {
                cin>>a>>b;
                total_grade+=a;
                if(a==(ll)r) continue;
                pq.push({b,a});
        }
        ll required=avg*n;
        ll need=required-total_grade;
        while(0<need)
        {
                pii tmp=pq.top();
                pq.pop();

                if(need <= r-tmp.second) {ans+=(need*tmp.first); break;}
                else
                {
                        ans+= (r-tmp.second)*tmp.first;
                        need-=(r-tmp.second);
                }

        }
        cout<<ans;
	return 0;
}
