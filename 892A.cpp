#include<bits/stdc++.h>
using namespace std;
 int sortfunction(int x, int y){
         return(x>y);
     }

int main(){
    unsigned long long n,tmp(0),a,b[100005],i;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a;
        tmp+=a;
    }

    for(i=0;i<n;i++){
        cin>>b[i];
    }

    sort(b,b+n,sortfunction);

    if(b[0]+b[1]>=tmp) cout<<"YES";
    else cout<<"NO";



}
