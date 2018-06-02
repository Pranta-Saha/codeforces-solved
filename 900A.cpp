#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x,y,pluscnt=0,minuscunt=0;

    while(n--)
    {
        cin>>x>>y;

        if(x<0)
            minuscunt++;
        else
            pluscnt++;

        if(minuscunt>1 && pluscnt>1)
        {
            cout<<"NO";
            return 0;
        }
    }

    if(pluscnt<=1 || minuscunt<=1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
