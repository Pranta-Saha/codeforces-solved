#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105]={},i,j,bw,fw,cnt=0,a;

    cin>>n>>a;

    bw=a; fw=a;

    for(i=1;i<=n;i++)
        cin>>arr[i];

    if(arr[a])
        cnt=1;

    for(i=1;i<=n;i++)
    {
        fw++;
        bw--;

        if(bw==0)
        {
            while(fw<=n)
            {
                if(arr[fw]) cnt++;
                fw++;
            }
            break ;
        }
        else if( fw==(n+1) )
        {
            while(1<=bw)
            {
                if(arr[bw]) cnt++;
                bw--;
            }
            break ;
        }

        if(arr[bw] and arr[fw])
            cnt+=2;

    }

    cout<<cnt<<endl;

    return 0;
}
