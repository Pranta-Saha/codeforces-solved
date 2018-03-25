#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp1,tmp2,tmp3,mx=-1,mn=1001;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i!=j)
                mx=max(mx,arr[j]-arr[j-1]);
            else
            {
                mx=max(mx,arr[j+1]-arr[j-1]);
                j++;
            }

        }

        mn=min(mn,mx);
        mx=-1;
    }

    cout<<mn<<endl;


    return 0;
}
