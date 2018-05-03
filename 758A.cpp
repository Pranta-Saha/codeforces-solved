#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100],i,mx=INT_MIN,re=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        re+=(mx-arr[i]);
    }

    cout<<re<<endl;
    return 0;
}
