#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,cnt1=0,cnt2=0,mx=INT_MIN,mn=INT_MAX,tmp;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>tmp;

        if(tmp>mx)
        {
            mx=tmp;
            cnt1=1;
        }
        else if(tmp==mx)
            cnt1++;

        if(tmp<mn)
        {
            mn=tmp;
            cnt2=1;
        }
        else if(mn==tmp)
            cnt2++;
    }




    if(mx==mn)
    {
        cout<<0<<" "<<(long long)((n-1)*n/2)<<endl;
    }
    else cout<<mx-mn<<" "<<cnt1*cnt2<<endl;



    return 0;
}
