#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,n,i,j,k,pices=-1;
    cin>>n>>a>>b>>c;

    for(i=0; i*a<=n; i++){
        for(j=0; j*b+i*a<=n; j++){
            k= (n-j*b-i*a)/c;

            if(k*c+j*b+i*a==n) pices=max(pices,(i+j+k));
        }
    }

    cout<<pices;
}
