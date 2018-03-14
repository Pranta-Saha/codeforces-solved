#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,n2,i,j,k,cnt;
    cin>>n;

    j=1;
    k=n*n;

    for(i=1;i<=n;i++)
    {
        cnt=1;
        for(j;cnt<=n/2;j++)
        {
            cout<<j<<" ";
            cnt++;
        }
        cnt=1;
        for(k;cnt<=n/2;k--)
        {
            cout<<k<<" ";
            cnt++;
        }

        cout<<endl;
    }

    return 0;
}
