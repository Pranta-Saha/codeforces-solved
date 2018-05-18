#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;

    cin>>n;

    if(n==0)
    {
        cout<<0;
        return 0;
    }

    n++;

    if(n&1)
        cout<<n;
    else
        cout<<n/(unsigned long long )2;

    return 0;
}