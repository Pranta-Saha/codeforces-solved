#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,i,mx(-1),mn(10005),tmp,cnt(0);
    cin>>n>>tmp;
    mx=mn=tmp;

    for(i=2;i<=n;i++){
        cin>>tmp;
        if(mx==tmp or mn==tmp) continue;
        mx=max(tmp,mx);
        mn=min(tmp,mn);
        if(tmp==mx or tmp==mn) cnt++;

    }
cout<<cnt;
}
