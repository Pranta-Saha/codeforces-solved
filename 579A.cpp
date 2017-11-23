#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,b=0;
    cin>>n;

    while(n){
        b=b+n%2;
        n=n/2;
    }

    cout<<b;

}
