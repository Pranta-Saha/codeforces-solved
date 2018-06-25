#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t,tt,sum(0),a,b,c,f;

    cin>>a>>b>>c>>n;

    f=n-a-b+c;

    if(f<1 || c>a || c>b ) cout<<-1<<endl;
    else cout<<f<<endl;


    return 0;
}
