#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,book,i,j,x,y;

    set<long long>setx,sety;

    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        cin>>x>>y;

        if(setx.find(x)==setx.end())
        {
            setx.insert(x);
        }

        if(sety.find(y)==sety.end())
        {
            sety.insert(y);
        }

        cout<<( (n-setx.size())*(n-sety.size()) )<<" ";
    }

    return 0;
}
