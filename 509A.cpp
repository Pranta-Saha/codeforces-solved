#include<bits/stdc++.h>
using namespace std;
int a[15][15];

int main(){
    int n,i,j,mx=1;
    cin>>n;

    for(i=0;i<n;i++){
        a[0][i]=1;
        a[i][0]=1;
    }

    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
            mx=max(mx,a[i][j]);
        }
    }

    cout<<mx;
    return 0;

}
