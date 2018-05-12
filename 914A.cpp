#include <bits/stdc++.h>
using namespace std;

bool chk_not_squre(int n)
{
    return ( ceil( sqrt((float)n)) - floor( sqrt((float)n)) );
}

int main()
{
    int n,i,mx=INT_MIN,tmp;

    cin>>n;

    set<int >not_squre;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        if(tmp<0)
            not_squre.insert(tmp);
        else
        {
            if(chk_not_squre(tmp))
                not_squre.insert(tmp);
        }
    }

    cout<<*not_squre.rbegin()<<endl;

    return 0;
}