#include <bits/stdc++.h>
using namespace std;

bool chk[50000];

int f[1000] = {0};
int fib(int n)
{
    if (n == 0)return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
    if (f[n]) return f[n];

    int k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
    return f[n];
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;fib(i)<=n;i++)
    {
        chk[fib(i)]=true;

    }

    for(int i=1;i<=n;i++)
    {
        if(chk[i]==true) cout<<'O';
        else cout<<'o';
    }

    return 0;
}
