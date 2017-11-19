#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,i;
    cin>>n;

    for(i=1;i<=n;i++){
        if(i==n){
            if(i%2==1) cout<<"I hate it ";
            else cout<<"I love it ";
        }else if(i%2==1)cout<<"I hate that ";
               else cout<<"I love that ";
    }

}
