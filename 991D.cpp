#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t,tt,sum(0);

    string a,b;
    cin>>a>>b;

    int len=a.size();

    for(i=0;i<len-1;i++)
    {
        if(a[i]=='0' && b[i]=='0' && (a[i+1]=='0'|| b[i+1]=='0') )
        {
            cnt++;
            a[i]='X'; b[i]='X';

            if(a[i+1]=='0') a[i+1]='X';
            else b[i+1]='X';
        }
        else if(a[i+1]=='0' && b[i+1]=='0' && (a[i]=='0'|| b[i]=='0') )
        {
            cnt++;
            a[i+1]='X'; b[i+1]='X';

            if(a[i]=='0') a[i]='X';
            else b[i]='X';
        }


    }

    cout<<cnt<<endl;

    return 0;
}
