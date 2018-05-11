#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;

    cin>>n;

    int arr[n]={};

    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(i=1;i<n;i++)
    {
        while(arr[i-1]>=arr[i])
        {
            arr[i]++;
            cnt++;
        }

    }

    cout<<cnt;

    return 0;
}
