#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp,tmp2;
    cin>>n;

    cin>>tmp;

        if(n==1 and tmp==0) { cout<<"UP"; return 0; }
        else if(n==1 and tmp==15) { cout<<"DOWN"; return 0; }
        else if(n==1 ) { cout<<"-1"; return 0; }

    for(i=2;i<=n;i++)
    {
        cin>>tmp2;

        if(i==n)
        {
            if(tmp2==0) cout<<"UP";
            else if(tmp2==15) cout<<"DOWN";
            else if(tmp<tmp2) cout<<"UP";
            else cout<<"DOWN";
        }

        tmp=tmp2;
    }
}
