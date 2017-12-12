#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,tmp,jokes=1,i;
    cin>>n>>d;
    i=n;
    while(i--)
    {
        cin>>tmp;
        d-= tmp;
    }


    if( d/10 < n-1  || d<0 ) cout<<"-1";
    else cout<<d/5;

}
