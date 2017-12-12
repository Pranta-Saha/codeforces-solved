#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long k2,k3,k5,k6,mn,result;
    cin>>k2>>k3>>k5>>k6;
    mn=min(k2,k5);
    mn=min(mn,k6);

    result=mn*256;
    k2-=mn;

    mn=min(k2,k3);

    result+=(mn*32);

    cout<<result;

    return 0;
}
