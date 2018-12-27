#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,k,tmp,mx=INT_MIN,sum=0;
    cin>>n>>k;

    vector<int >arr(n+1,0),sum0(n+1,0);

    for(i=1;i<=n;i++)
        cin>>arr[i];

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        if(tmp==0)
        {
            sum0[i]=sum0[i-1]+arr[i];
        }
        else
        {
            sum0[i]=sum0[i-1];
            sum+=arr[i];
        }
    }

    i=1; j=k;
    while(j<=n)
    {
        tmp=sum0[j]-sum0[i-1];
        mx=max(mx,tmp);
        i++; j++;
    }

    cout<<sum+mx;
	return 0;
}
