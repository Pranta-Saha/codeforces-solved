#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,ck=0;
    string a[1000];
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i][0]=='O' and a[i][1]=='O' and ck==0 ) { a[i][0]=a[i][1]='+'; ck=1; }
        if(a[i][3]=='O' and a[i][4]=='O' and ck==0 ) { a[i][3]=a[i][4]='+';  ck=1; }
    }


    if(ck==0) cout<<"NO";
    else {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){ cout<<a[i]<<endl; }
    }

}
