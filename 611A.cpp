#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string a,b;

    cin>>x>>a>>b;

    if(b=="week")
    {
        if(x==5 || x==6) cout<<53;
        else cout<<52;
    }
    else
    {
        if(x<=29) cout<<12;
        else if(x==30) cout<<11;
        else cout<<7;
    }

    return 0;
}
