#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,x,i,cnt(0);
    cin>>n>>x;

    for(i=1;i<=n;i++)
        if(x%i==0 and x/i<=n) cnt++;



    cout<<cnt;
    return 0;

}
