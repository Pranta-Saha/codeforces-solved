#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i;
    cin>>a>>b>>c;

    if(a==0 || b<2 || c<4)
    {
        cout<<0;
        return 0;
    }

    for( i=1;i<=a;i++)
    {
        if( b<(i*2) || c<(i*4) )
        {
            break;
        }
    }

    cout<<7*(i-1);

    return 0;
}
