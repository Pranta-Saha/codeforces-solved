#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmp1,tmp2;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>tmp1>>tmp2;

            if(tmp1 || tmp2) cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
