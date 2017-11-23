#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    int i,n,m;
    cin>>n>>m;
    n=n*m;
    for(i=0;i<n;i++){
        cin>>a;
        if(a=='C'||a=='M'||a=='Y'){ cout<<"#Color"; return 0; }
    }

    cout<<"#Black&White";
    return 0;

}
