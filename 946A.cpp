#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp,i,sum=0,mx;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(tmp>0)
            sum+=tmp;
        else
            sum-=tmp;
    }

    cout<<sum<<endl;

    return 0;
}
