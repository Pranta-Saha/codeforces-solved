#include <bits/stdc++.h>
using namespace std;

int main (){
    int i,j,k,cnt=0,n;
    string a;
    cin>>a;
    n=a.size();

    for(i=0;i<n;i++){
        if(a[i]=='Q'){
            for(j=i+1;j<n;j++){
                if(a[j]=='A'){
                    for(k=j+1;k<n;k++){
                        if(a[k]=='Q') cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt;

}