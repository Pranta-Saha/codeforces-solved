#include<bits/stdc++.h>
using namespace std;

main()
{
    long long a,b;
    long long s;
    cin>>a>>b>>s;

    if( (s-abs(a)-abs(b))>=0 and (s-abs(a)-abs(b))%2==0 ) cout<<"Yes";
    else cout<<"No";

    return 0;
}
