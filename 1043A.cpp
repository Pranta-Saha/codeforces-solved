
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,sum=0,tmp,mx=-1,i ;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        sum+=tmp;
        mx=max(mx,tmp);
    }

    tmp=mx*n - sum;
    while(tmp<=sum)
    {
        mx++;
        tmp+=n;
    }

    cout<<mx;

	return 0;
}
