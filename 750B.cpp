#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ew=0,n,i,ns=0,dis;
    string direction;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>dis>>direction;

        if(direction=="South")
            ns+=dis;
        else if(direction=="North")
            ns-=dis;
        else if( (ns==0 || ns==20000) && dis!=0 )
        {
            cout<<"NO"<<endl;
            return 0;
        }

        if(0>ns || ns>20000)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    if(ns!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    return 0;
}
