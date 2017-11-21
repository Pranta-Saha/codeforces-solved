#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i;
    cin>>n>>t;

    if(n==1 and t==10) cout<<"-1";
    else if(t==10) {cout<<"1"; for(i=1;i<n;i++) cout<<"0";}
    else for(i=0;i<n;i++) cout<<t;
}
