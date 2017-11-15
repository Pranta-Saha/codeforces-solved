#include<bits/stdc++.h>
using namespace std;
struct cordinet{
    int x;
    int y;
};

int main(){
    unsigned long long s,n,i,j;
    cin>>s>>n;
    cordinet tmp[n];

    for(i=0;i<n;i++) cin>>tmp[i].x>>tmp[i].y;

    for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        if(tmp[i].x<tmp[j].x) swap(tmp[i],tmp[j]);
    }
  }

    for(int i=0;i<n;i++)
        if(s<=tmp[i].x){cout<<"NO"; return 0;}
        else s+=tmp[i].y;

    cout<<"YES";
    return 0;

}
