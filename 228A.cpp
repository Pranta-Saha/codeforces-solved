#include<bits/stdc++.h>
using namespace std;


int main(){
    unsigned long long  a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==b && a==c && a==d ) cout<<"3";
    else if(( a==b && a==c)||(a==b&&c==d)||(a==c&&b==d) ||(a==b&&a==d) ||(a==d&&c==b)|| (b==c&&b==d) || (a==c&&a==d) ) cout<<"2";
    else if(a==b||a==c||a==d||b==c||b==d||c==d) cout<<"1";
    else cout<<"0";
}
