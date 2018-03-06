#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1=0,h2,n,i,energy=0,spend=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>h2;

        energy+=(h1-h2);
        if(energy<0)
        {
            spend+=(-energy);
            energy=0;
        }
        h1=h2;

    }

    cout<<spend;

    return 0;
}
