#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,i,a=0,b=0,c=0,tmp;
    cin>>n;

    for(i=0;i<n;i++){ cin>>tmp; a+=tmp; }
    for(i=0;i<n-1;i++){ cin>>tmp; b+=tmp; }
    for(i=0;i<n-2;i++){ cin>>tmp; c+=tmp; }

    cout<<a-b<<endl<<b-c;
    return 0;

}
