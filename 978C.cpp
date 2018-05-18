#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,m,i,j,tmp;

    cin>>n>>m;

    unsigned long long arr[n+1],brr[m+1]; arr[0]=0;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }

    i=1;

    for(j=1;j<=m;j++)
    {
        cin>>tmp;

        for(i;i<=n;i++)
        {
            if(tmp<=arr[i])
            {
                cout<<i<<" "<<(tmp-arr[i-1])<<endl;

                break;
            }
        }

    }

    return 0;
}