#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0,c=0,mishka,chris,i;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>mishka>>chris;
        if(mishka>chris) m++;
        else if(mishka<chris) c++;
    }

    if(m==c) cout<<"Friendship is magic!^^";
    else if(m>c) cout<<"Mishka";
    else cout<<"Chris";


}
