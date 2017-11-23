#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cnt=0,i,a[2005];
    cin>>n>>k;
    for( i=0;i<n;i++){
        cin>>a[i];
        a[i]=5-a[i]-k;
        if(a[i]>=0)cnt++;

    }

    cout<<cnt/3;


}
