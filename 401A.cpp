#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,sum=0,tmp,i;

    cin>>n>>x;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        sum+=tmp;
    }

    sum=abs(sum);

    if(sum%x==0) cout<<sum/x<<endl;
    else cout<<sum/x+1<<endl;

    return 0;
}
