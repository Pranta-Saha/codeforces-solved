#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;

    for(i=n+1;i<=m;i++){
        for(j=2;j<=i;j++)
            if(i%j==0) break;

        if(i==j and i!=m) {cout<<"NO"; return 0;}
        if(i==j and i==m) {cout<<"YES"; return 0;}
    }

    cout<<"NO";
    return 0;

}