#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    int len,i,j;
    len= a.size();

    cout<<a[0];
    for(i=1;i<len;i++)
    {
        if(a[i]<b[0]) cout<<a[i];
        else break;
    }
    cout<<b[0];
}
