#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105],mn=200,mx=-1,sum,i,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    sum=mx+mn;

    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<i<<" "<<j<<endl;
                arr[i]=-500;
                arr[j]=-500;
                break;
            }
        }
    }

}
