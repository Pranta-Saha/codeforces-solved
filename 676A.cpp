#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp,d1,dn;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        if(tmp==1)
        {
            d1=min(i,n-i+1);
        }
        if(tmp==n)
        {
            dn=min(i,n-i+1);
        }
    }

    cout<< n-min(d1,dn);

    return 0;
}
