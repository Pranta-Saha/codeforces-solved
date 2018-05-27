#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,t,i,tmp,cnt=0,res=0;

    cin>>n>>t>>c;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(tmp<=t)
            cnt++;
        else
            res+=max(0,(cnt-c+1)), cnt=0;
    }
    res+=max(0,(cnt-c+1));

    cout<<res<<endl;

    return 0;
}
