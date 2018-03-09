#include <bits/stdc++.h>
using namespace std;

int main()
{

    int l,r,a,t=0;
    cin>>l>>r>>a;

    int x=min(l,r);
    int y=max(l,r);

    if(x+a<=y)
    {
        cout<<(x+a)*2;
    }
    else
    {
        l=x+a-y;
        l=y+l/2;
        cout<<l*2;
    }
    return 0;
}
