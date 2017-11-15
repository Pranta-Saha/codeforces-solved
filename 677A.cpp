#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,cnt(0),tmp;
    cin>>n>>h;

    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp>h) cnt+=2;
        else cnt++;
}
cout<<cnt;
}
