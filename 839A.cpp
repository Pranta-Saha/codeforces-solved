#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,candis=0,tmp;
    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        candis+=tmp;

        if(candis>=8)
        {
            candis-=8;
            k-=8;
        }
        else
        {
            k-=candis;
            candis=0;
        }

        if(k<=0)
        {
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"-1";
    return 0;
}
