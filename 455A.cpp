#include <bits/stdc++.h>
using namespace std;

unsigned long long  cnt[100002],totalValue[100002];

int main()
{
    unsigned long long i,n,mx=0,tmp;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        cnt[tmp]++;

        mx=max(mx,tmp);
    }

    totalValue[1]=cnt[1]*1;


    for(i=2;i<=mx;i++)
    {
        totalValue[i]=i*cnt[i]+totalValue[i-2];

        totalValue[i]=max(totalValue[i-1],totalValue[i]);
    }

    cout<<totalValue[mx]<<endl;
    return 0;
}
