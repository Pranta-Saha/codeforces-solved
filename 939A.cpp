#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    cin>>n;

    int arr[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=n;i++)
    {
        if( arr[arr[arr[i]]]==i )
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
