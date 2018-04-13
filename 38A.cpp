#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,years(0),tmp[205],a,b;
    cin>>n;

    for(i=2;i<=n;i++)
    {
        cin>>tmp[i];
    }

    cin>>a>>b;

    for(i=a+1;i<=b;i++)
        years+=tmp[i];

    cout<<years<<endl;

    return 0;
}
