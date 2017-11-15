#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,m,i,cnt(0),tmp,x=0;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>tmp;
        if(tmp<x) cnt+=n-x+tmp;
        else if(tmp>x ) cnt+=tmp-x;
        x=tmp;
    }
    cnt--;
    cout<<cnt;
    return 0;
}
