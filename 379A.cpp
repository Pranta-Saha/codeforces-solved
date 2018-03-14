#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;

    n=a;

    while(a>=b)
    {
        n+=a/b;
        a=a%b+a/b;
    }

    cout<<n<<endl;

    return 0;
}
