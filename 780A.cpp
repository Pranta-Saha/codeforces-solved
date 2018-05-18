#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx=INT_MIN,tmp;

    cin>>n;

    int nn=n*2;

    set<int>table;

    for(i=1;i<=nn;i++)
    {
        cin>>tmp;

        if(table.find(tmp)==table.end())
        {
            table.insert(tmp);
        }
        else
            table.erase(tmp);

        mx=max(mx,(int)table.size());

    }

    cout<<mx<<endl;

    return 0;
}
