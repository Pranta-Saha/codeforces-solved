#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    if(b==a) {cout<<"YES"; return 0;}

    if(c==0)
    {
        if(a==b) {cout<<"YES"; return 0;}
    }
    else if(c<0)
    {
        if(b<a)
        {
            if(abs(b-a)%abs(c)==0) {cout<<"YES"; return 0;}
        }
    }
    else
    {
        if(a<b)
        {
            if((b-a)%c==0) {cout<<"YES"; return 0;}
        }
    }

    cout<<"NO";
    return 0;

}
