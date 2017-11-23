#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,tmp,police(0),untreated(0);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tmp;
        if(tmp==-1){
            if(police==0) untreated++;
            else police--;
        }else police+=tmp;
    }

    cout<<untreated;
}
