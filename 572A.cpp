#include <bits/stdc++.h>
using namespace std;

int main()
{
    int na,nb,k,m,mxa,tmp,i;

    cin>>na>>nb>>k>>m;

    for(i=1;i<=na;i++)
    {
        cin>>tmp;
        if(i==k) mxa=tmp;
    }

    for(i=1;i<=nb;i++)
    {
        cin>>tmp;
        if(i==(nb-m+1))
        {
            if(mxa<tmp)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    return 0;
}
