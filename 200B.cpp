#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    float tmp,tmp1;

    for(int i=0;i<n;i++){
        cin>>tmp;
        tmp1+=(tmp/100);
    }
    printf("%.9f",((tmp1/n)*100));

}
