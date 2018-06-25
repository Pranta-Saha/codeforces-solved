#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),tmp,lo,hi,mid,mx,mn;

    cin>>n;

    cnt=n/100;
    n%=100;

    cnt+=n/20;

    n%=20;

    cnt+=n/10;

    n%=10;

    cnt+=n/5;

    n%=5;

    cnt+=n;

    cout<<cnt<<endl;

    return 0;
}
