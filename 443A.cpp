#include<bits/stdc++.h>
using namespace std;
bool ar[125];

main(){
    char a[1005];
    gets(a);
    int n,i,cnt=0;
    //cout<<a;
    n=strlen(a);
    //cout<<n;

    for(i=1;i<n;i+=3){
        ar[a[i]]=true;
    }

    for(i=97;i<123;i++){
        if(ar[i]==1) cnt++;
    }
   cout<<cnt;
}
