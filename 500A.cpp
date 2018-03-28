#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,tmp=1,arr[30001],i;

    cin>>n>>t;

    for(i=1;i<n;i++) cin>>arr[i];

    while(tmp<t)
    {
        tmp+=arr[tmp];
    }



    if(tmp==t) cout<<"YES";
    else cout<<"NO";

    return 0;
}
