#include<bits/stdc++.h>
using namespace std;
int b[4];
int main(){
    int n,i,j,a[5005];
    cin>>n;

    for(i=1;i<=n;i++) {
        cin>>a[i];
        b[a[i]]++;
    }

    sort(b,b+4);
    cout<<b[1]<<endl;

    for(i=1;i<=b[1];i++){
        for(j=1;j<=n;j++)
            if(a[j]==1) {cout<<j<<" "; a[j]=0; break;}
        for(j=1;j<=n;j++)
            if(a[j]==2) {cout<<j<<" "; a[j]=0; break;}
        for(j=1;j<=n;j++)
            if(a[j]==3) {cout<<j<<" "; a[j]=0; break;}

        cout<<endl;
}
}
