#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long m,n,divisr=1,i;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        if(divisr>m) break;
        divisr=divisr*2;
    }

    cout<<(m%divisr)<<endl;
    return 0;

}
