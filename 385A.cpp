#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,tmp1,tmp2,mx=0,i,profit;
    cin>>n>>c>>tmp1;

    for(i=1;i<n;i++)
    {
        cin>>tmp2;

        if(tmp1>tmp2+c)
        {
            profit=(tmp1-tmp2)-c;
            mx=max(mx,profit);
        }
        tmp1=tmp2;
    }

    cout<<mx<<endl;
    return 0;
}
