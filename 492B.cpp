#include <bits/stdc++.h>
using namespace std;

int main()
{
    double l,j,mx,arr[1005];
    int i,n;

    cin>>n>>l;


    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    mx=arr[0];

    for(i=1;i<n;i++)
    {
        mx=max(mx,((arr[i]-arr[i-1])/2.0));
    }

    mx=max(mx,(l-arr[n-1]));

    double tmp=mx;

    cout<<setprecision(10)<<fixed<<tmp<<endl;


    return 0;
}
