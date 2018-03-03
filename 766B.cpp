#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n],i;

    for(i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    for(i=2;i<n;i++)
    {
        if( arr[i-2] + arr[i-1] > arr[i] )
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}
