#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,cntzero=0,i,re=1;

    bool chk=0,tmp;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(tmp)
        {
            re*=max((unsigned long long)1,cntzero+1);
            cntzero=0;
        }
        else if(chk)
            cntzero++;

        if(tmp) chk=1;
    }

    if(chk==0) cout<<0<<endl;
    else cout<<re<<endl;

    return 0;
}
