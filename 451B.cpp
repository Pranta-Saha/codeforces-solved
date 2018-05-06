#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ii=0,jj=0;

    cin>>n;

    int arr[n+2];

    arr[0]=0; arr[n+1]=INT_MAX;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];

        if(arr[i-1]>arr[i] && ii==0)
        {
            ii=i-1;
        }
    }

    for(i=n;i>1;i--)
    {
        if(arr[i-1]>arr[i])
        {
           jj=i;
           break;
        }
    }

    //cout<<jj<<endl;


    if(jj==0 || ii==0)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;

        return 0;
    }

    for(i=ii;i<jj;i++)
    {
        if( (arr[i]<arr[i+1]) || (arr[ii]>arr[jj+1]) || (arr[jj]<arr[ii-1]) )
        {
            cout<<"no"<<endl;
            return 0;
        }
    }

    //cout<<ii<<" "<<jj;

    cout<<"yes"<<endl;
    cout<<ii<<" "<<jj<<endl;

    return 0;
}
