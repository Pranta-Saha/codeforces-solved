#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int n,m,i,j,tmp;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        arr[i]=arr[i-1]+tmp;
    }

    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>tmp;
        cout<<lower_bound(arr,arr+n+1,tmp) - arr <<endl;

    }
    return 0;

}
