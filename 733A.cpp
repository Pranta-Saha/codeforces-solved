#include<bits/stdc++.h>
using namespace std;

main(){
    string a;
    cin>>a;
    int len,i,j,cnt=1,maxjmp=1;
    len= a.size();

    for(i=0;i<len;i++)
    {
        if( a[i]=='A' or a[i]=='E' or a[i]=='I' or a[i]=='O' or a[i]=='U' or a[i]=='Y' )
        {
            cnt=1;
        }
         else
        {
            cnt++;
            maxjmp=max(maxjmp, cnt);
        }
    }

    cout<<maxjmp;

}
