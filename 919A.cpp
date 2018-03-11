#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,price=101;
    int n,m;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        price=min(price,(a/b));
    }

    printf("%.8f\n",price*m);

    return 0;
}
