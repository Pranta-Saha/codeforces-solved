
#include <bits/stdc++.h>
using namespace std;

long long csum[500005];
int main()
{
    long long n,i,arr[500005],cnt=0,j,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        csum[i]=arr[i];
    }
    for(i=1;i<n;i++)
    {
        csum[i]+=csum[i-1];
    }

    if(csum[n-1]%3!=0){ cout<<0; return 0; }
    long long tmp=csum[n-1]/3;

    for(i=n-1;i>=0;i--)
    {
        if(csum[i]==tmp*2) cnt++;
        else if(csum[i]==tmp) ans+=cnt;
    }


    if(tmp==0) ans=((cnt-1)*(cnt-2))/2;
    cout<<ans;

	return 0;
}
