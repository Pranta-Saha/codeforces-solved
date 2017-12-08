#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n,a,p,tmp=1000,i,money=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>p;
        tmp=min(tmp,p);
        money=money+a*tmp;
    }

    cout<<money;
    return 0;
}
