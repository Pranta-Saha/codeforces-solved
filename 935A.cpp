#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if((n-i)%i==0) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
