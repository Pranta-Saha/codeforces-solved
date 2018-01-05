#include<bits/stdc++.h>
using namespace std;
int arr[1005];

int main()
{
    int n,tmp,i,mx=-1,cnt=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        arr[tmp]++;
    }

    for(i=1;i<1005;i++)
    {
        if(arr[i])
        {
            cnt++;
            mx=max(mx,arr[i]);
        }
    }

    cout<<mx<<" "<<cnt;
}
