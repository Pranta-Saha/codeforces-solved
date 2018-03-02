#include <bits/stdc++.h>
using namespace std;

bool h[55],v[55];

int main()
{
    int n,hp,vp;
    cin>>n;
    n=n*n;

    for(int i=1;i<=n;i++)
    {
        cin>>hp>>vp;
        if( h[hp]==0 && v[vp]==0 )
        {
            cout<<i<<" ";

            h[hp]=true;
            v[vp]=true;

        }

    }

    return 0;

}
