#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,result=0;
    string a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        if(a[i]<b[i])  swap(a[i],b[i]);
        if( 10-a[i]+b[i] < a[i]-b[i] ) result+=10-a[i]+b[i];
        else result+=a[i]-b[i];
    }

    cout<<result;
    return 0;


}
