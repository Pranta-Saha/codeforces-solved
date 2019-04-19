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
        cin>>n;

        if(n<3) {cout<<-1; return 0;}
        if(n&1)
        {
                cout<<(n*n+1)/2<<' '<<(n*n-1)/2;
        }
        else
        {
                cout<<(n*n)/4+1<<' '<<(n*n)/4-1;

        }
	return 0;
}
