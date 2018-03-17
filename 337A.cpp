#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[51],i,mn=100000;

    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        cin>>a[i];
    }

    sort(a+1,a+m+1);

    for(i=1;i<=m-n+1;i++)
    {
        mn=min(mn,a[i+n-1]-a[i]);

    }

    cout<<mn<<endl;


    return 0;
}
