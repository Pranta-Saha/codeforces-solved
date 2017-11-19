#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,i,j,k,indx=1,mx,a[205],tmp=0;
    cin>>n;
    for(i=1;i<n+2;i++){
        tmp+=(i*(i+1))/2;
        if(tmp>n) {cout<<(i-1); return 0;}
    }
}
