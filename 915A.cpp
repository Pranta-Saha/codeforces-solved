#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,tmp,mn=INT_MAX;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        if(k%tmp==0)
        {
            mn=min(mn,(k/tmp));
        }
    }

    cout<<mn<<endl;

    return 0;
}
