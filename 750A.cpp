#include<bits/stdc++.h>
using namespace std;

int main(){
    int contime(0),n,k,remain_time,contest_time(0);
    cin>>n>>k;
    remain_time=240-k;

    for(int i=1;i<=n;i++){
        contest_time+=i*5;
        //cout<<contest_time;
        if(contest_time>remain_time) {cout<<i-1; return 0;}
        else if(contest_time==remain_time) {cout<<i; return 0;}

    }
    cout<<n;
    return 0;
}
