#include <bits/stdc++.h>
using namespace std;
    int mp[101]={0},arr[6],sum=0,i,mx=INT_MIN;

int main()
{

    for(i=1;i<=5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mp[arr[i]]++;
    }

    for(i=1;i<=5;i++)
    {
        if(mp[arr[i]]>=2)
        {
            mp[arr[i]] = arr[i]*min(mp[arr[i]],3);
        }
        else mp[arr[i]]=0;

        mx=max(mx,mp[arr[i]]);
        mp[arr[i]]=0;

    }

    cout<<sum-mx<<endl;

    return 0;
}
