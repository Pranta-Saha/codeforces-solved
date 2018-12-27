
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    long long n,i,j,k;
    cin>>n>>k;
    vector<long long>vec(n+2,0);

    for(i=1;i<=n;i++)
    {
        cin>>vec[i];
        vec[i]+=vec[i-1];
    }

    double ans=0,week=n-k+1;
    for(i=k;i<=n;i++)
    {
        double tmp=vec[i]-vec[i-k];
        ans+=tmp/week;

    }

    cout<<fixed<<setprecision(10)<<ans<<endl;

	return 0;
}
