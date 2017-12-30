#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,tmp=1,mem=1;
    cin>>n;

    for(i=2;i<=n;i++)
    {
        mem=mem+tmp;
        if(i%2==0) tmp++;
    }
    cout<<mem;

}
