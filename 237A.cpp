#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,m,h2,m2,cnt=1,mx=1,i;
    cin>>n;
    cin>>h>>m;
    for(i=1;i<n;i++)
    {
        cin>>h2>>m2;

        if(h2==h and m2==m)
        {
            cnt++;
            mx=max(mx,cnt);
        }else
        {
            cnt=1;
        }

        h=h2;
        m=m2;
    }

    cout<<mx;
}
