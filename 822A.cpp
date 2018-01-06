#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial( int n )
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main()
{
    unsigned long long a,b,mn;
    cin>>a>>b;
    mn=min(a,b);

    cout<<factorial(mn);
}
