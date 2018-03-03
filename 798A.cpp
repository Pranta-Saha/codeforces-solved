#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[16];
    cin>>str;

    int len=(unsigned)strlen(str),cnt=0;

    for(int i=0;i<(len/2);i++)
        if(str[i]!=str[len-i-1])
             cnt++;

    if(cnt==1) {cout<<"YES"; return 0;}

    if(cnt==0 && len%2==1 ) {cout<<"YES"; return 0;}

    cout<<"NO";
    return 0;
}
