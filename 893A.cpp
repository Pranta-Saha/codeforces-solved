#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,pl1=1,pl2=2,winner;
    cin>>n;

    while(n--)
    {
        cin>>winner;

        if(6-(pl1+pl2)==winner)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        pl1=6-(pl1+pl2);
        pl2=winner;
    }

    cout<<"YES";

    return 0;
}
