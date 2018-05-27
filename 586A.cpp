#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt0=0,res=0,tmp;

    bool flug=0;

    cin>>n;

    while(n--)
    {
        cin>>tmp;

        if(flug==0 && tmp==0)
            continue;

        if(tmp==0)
            cnt0++;
        else
        {
            flug=1;

            if(cnt0==1) res++;

            cnt0=0;

            res++;
        }
    }

    cout<<res<<endl;
    return 0;
}
