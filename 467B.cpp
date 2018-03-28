#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,arr[1005],i,j,cnt=0,frnd=0,fedor;

    cin>>n>>m>>k;

    for(i=1;i<=m;i++) cin>>arr[i];

    cin>>fedor;

    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            if( (fedor&(1<<j)) != (arr[i]&(1<<j)) ) cnt++;
        }

        if(cnt<=k) frnd++;

        cnt=0;
    }

    cout<<frnd<<endl;
    return 0;
}
