#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,x,y,v,mn=100000000.0,re;
    int n;

    cin>>a>>b>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>v;



        re=sqrt((x-a)*(x-a) + (y-b)*(y-b) )/v;

        mn=min(mn,re);

    }

    printf("%.8f",mn);
}
