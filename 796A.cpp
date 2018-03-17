#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,i,dst=105,dst2=105;
    cin>>n>>m>>k;
    int arr[n+1];

    for(i=1;i<=n;i++) cin>>arr[i];

    for(i=m+1;i<=n;i++)
    {
        if(arr[i]<=k && arr[i]!=0)
        {
            dst=i-m;
            break ;
        }
    }

    for(i=m-1;i>=1;i--)
    {
        if(arr[i]<=k && arr[i]!=0)
        {
            dst2= m-i ;
            break;

        }
    }

    dst=min(dst,dst2);

    cout<<dst*10<<endl;

    return 0;
}
