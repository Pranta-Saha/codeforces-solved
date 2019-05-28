#include <bits/stdc++.h>
using namespace std;


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        sort(arr,arr+n);

        swap(arr[0],arr[n-1]);

        for(i=0;i<n;i++)
                cout<<arr[i]<<' ';

	return 0;
}

