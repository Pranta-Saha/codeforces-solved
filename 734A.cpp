#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,cntA(0),cntB(0);
    cin>>n;
    char tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp=='A') cntA++;
        else cntB++;
    }

    if(cntA>cntB) cout<<"Anton";
    else if(cntA<cntB) cout<<"Danik";
    else cout<<"Friendship";

}
