#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;

    cin>>n;

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=(n/2)-i+1;j++) cout<<"*";

        for(j=1;j<=(2*i)-1;j++) cout<<"D";

        for(j=1;j<=(n/2)-i+1;j++) cout<<"*";

        cout<<endl;
    }

    for(i=1;i<=n;i++) cout<<"D";
    cout<<endl;


    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++) cout<<"*";

        for(j=1;j<=n-(i*2);j++) cout<<"D";

        for(j=1;j<=i;j++) cout<<"*";

        cout<<endl;
    }

    return 0;
}
