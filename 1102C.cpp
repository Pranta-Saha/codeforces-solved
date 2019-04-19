#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,x,y,tcs=0,k,m,u,v;
        cin>>n>>x>>y;
        if(x>y){ cout<<n; return 0;}
        vector<int>vec(n);
        for(i=0;i<n;i++)
                cin>>vec[i];
        sort(vec.begin(),vec.end());
        int range=upper_bound(vec.begin(),vec.end(),x)-vec.begin();
        cout<< (range/2) + (range&1) ;
	return 0;
}
