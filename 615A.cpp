#include<bits/stdc++.h>
using namespace std;

bool a[105];

int main()
{
    int n,m,tmp,tmp2;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        for(int j=1;j<=tmp;j++)
        {
            cin>>tmp2;
            a[tmp2]=1;
        }

    }

    for(int i=1;i<=m;i++)
    {
        if(a[i]==0){ cout<<"NO"<<endl; return 0; }
    }

    cout<<"YES"<<endl;

}
