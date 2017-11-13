#include<bits/stdc++.h>
using namespace std;

int ax[95];

int main(){
    int an,bn,cn,i,j,cnt(0),cnt2(0);
    string a,b,c;
    cin>>a>>b>>c;
    an=a.size();
    bn=b.size();
    cn=c.size();

    for(i=0;i<an;i++) ax[a[i]]++;
    for(i=0;i<bn;i++) ax[b[i]]++;

    for(i=0;i<cn;i++){
        if(ax[c[i]]==0) { cout<<"NO"; return 0;}
        else ax[c[i]]--;
    }

    for(i=65;i<91;i++) if(ax[i]!=0) { cout<<"NO"; return 0;}

    cout<<"YES";
    return 0;

}
