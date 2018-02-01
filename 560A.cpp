#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,lo=10000000,n;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>b;
        lo=min(lo,b);
    }
    if(lo==1) cout<<"-1";
    else cout<<"1";

    return 0;
}
