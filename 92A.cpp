#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,sum=0,i;

    cin>>n>>m;

    x=(n*(n+1))/2;

    m=m%x;

    for(i=1;i<=n;i++)
    {
        sum+=i;

        if(m<sum)
        {
            x=((i-1)*i)/2;

            cout<<m-x<<endl;
            return 0;
        }
    }

    return 0;
}
