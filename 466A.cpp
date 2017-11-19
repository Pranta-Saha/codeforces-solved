#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,tmp,tmp2;
    cin>>n>>m>>a>>b;
    tmp=(n/m)*b;
    tmp+=(n%m)*a;
    tmp2=(ceil((float)n/(float)m))*b;
    tmp=min(tmp,tmp2);
    tmp=min(tmp,(n*a));
    cout<<tmp;
}
