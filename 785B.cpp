#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,mx=0,chlftmx=INT_MIN,chrghtmn=INT_MAX,plftmx=INT_MIN,prghtmn=INT_MAX;

    int tmpl,tmpr;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>tmpl>>tmpr;
        chlftmx=max(chlftmx,tmpl);
        chrghtmn=min(chrghtmn,tmpr);
    }
    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>tmpl>>tmpr;
        plftmx=max(plftmx,tmpl);
        prghtmn=min(prghtmn,tmpr);
    }

    int re=max( (chlftmx-prghtmn),(plftmx-chrghtmn) );

    cout<<max(0,re)<<endl;

    return 0;
}
