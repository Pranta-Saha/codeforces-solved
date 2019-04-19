#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        ll n,i,j,t,tcs=0,k,m,u,v;
        cin>>n; m=n;

        ll tmp=(n*(n+1))/2;
        k=tmp;
        tmp=tmp/2;
        vector<ll>vec;
        while(tmp>0)
        {
                if(tmp>=n)
                {
                        tmp-=n;
                        vec.push_back(n--);
                }
                else
                {
                        vec.push_back(tmp);
                        break;
                }
        }

        cout<<(k&1)<<endl;
        cout<<vec.size()<<' ';
        for(auto i: vec)
                cout<<i<<' ';



	return 0;
}
