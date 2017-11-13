#include<bits/stdc++.h>
using namespace std;

int gdc(int x, int y){
    int z;
    z=min(x,y);
    if(x==0) return y;
    else if(y==0) return x;

    while(z!=0){
        if( x%z==0 && y%z==0 ){ return z; }
        else z--;
    }
}

int main(){
    int a,b,n;
    cin>>a>>b>>n;

    while(n>0){
        n=n-gdc(a,n);
        if( n<gdc(b,n) ) {cout<<"0"; return 0;}
        n=n-gdc(b,n);
    }

    cout<<"1";
}
