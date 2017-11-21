#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long k,r,i=1;
    cin>>k>>r;
    while(1){
        if(((k*i)%10==r)||((k*i)%10==0)){ cout<<i; return 0;}
        ++i;
    }
}
