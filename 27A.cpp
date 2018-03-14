#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],i;

    for(i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1<<endl;
            return 0;
        }

    }

    cout<<i+1<<endl;

    return 0;
}
