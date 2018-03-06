#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,f,t,joy,mx=-10000000000,i;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>f>>t;

        if(t>k)
        {
            joy=f-(t-k);
            mx=max(mx,joy);
        }
        else mx=max(mx,f);
    }

    cout<<mx;

    return 0;
}
