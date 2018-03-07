#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,mx=0,tmp;
    cin>>n>>m;
    int arr[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(tmp%m==0 ) arr[i]=tmp/m;
        else arr[i]=(tmp/m)+1;

        mx=max(mx,arr[i]);
    }

    for(i=n;i>=1;i--)
        if(arr[i]==mx)
             {
                 cout<<i<<endl;
                 return 0;
             }

    return 0;
}
