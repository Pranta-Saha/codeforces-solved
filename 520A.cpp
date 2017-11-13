#include<bits/stdc++.h>
using namespace std;
bool a[95];

int main(){
    int n,i;
    char tmp;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>tmp;
        if(tmp>91) tmp=toupper(tmp);
        a[tmp]=true;
    }

    for(i=65;i<=90;i++){
        if(a[i]==0) {cout<<"NO"; return 0;}
    }

    cout<<"YES";

return 0;
}
