#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,i=1;
    cin>>a>>b;

    while(1){
        a=a*3;
        b=b*2;

        if(a>b){ cout<<i; return 0; }
        i++;
    }

}