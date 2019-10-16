#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

class solution{
public:
        ll n,m,i,j;
        void solve()
        {
                ll k,y;
                cin>>y>>k>>n;
                if(n<=y || n<k  ) {cout<<-1; return;}
                bool cnt=0;
                for(i=1; i*k<=n;i++)
                {
                        ll tmp=i*k;
                        if(i*k>y)
                        {
                                cout<<i*k-y<<' ';
                                cnt=1;
                        }
                }
                if(cnt==0) cout<<-1;
                return ;
        }
};


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solution ob;
        ob.solve();
	return 0;
}
