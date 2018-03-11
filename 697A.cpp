#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,s,x;
    cin>>t>>s>>x;

    if(t==x) {cout<<"YES"<<endl; return 0;}

    for(i=t+s;i<=x;i+=s)
    {
        if(i==x || i+1==x ) {cout<<"YES"<<endl; return 0;}
    }

    cout<<"NO"<<endl;
    return 0;
}
