#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=5,tmp,tmp2=0;
    while(i!=0){
        i--;
        cin>>tmp;
        tmp2+=tmp;
    }

    if(tmp2%5!=0 or tmp2==0) cout<<"-1";
    else cout<<tmp2/5;

    return 0;

}
