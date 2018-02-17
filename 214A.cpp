#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,limit,a,b,cnt=0;

    cin>>n>>m;
    if(n==1 && m==1) { cout<<2; return 0; }

    limit=min(n,m);

    for(a=0;a<=limit;a++)
    {
        for(b=a;b<=limit;b++)
        {

            if(((a*a)+b)==n && (a+(b*b))==m ) cnt++;
            if( n!=m && ((a*a)+b)==m && (a+(b*b))==n ) cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;


}
