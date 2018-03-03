#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ss,v1,v2,t1,t2,f,s;
    cin>>ss>>v1>>v2>>t1>>t2;

    f=ss*v1+2*t1;
    s=ss*v2+2*t2;

    if(f<s)
    {
        cout<<"First";
    }
    else if(f==s)
    {
        cout<<"Friendship";
    }
    else cout<<"Second";

    return 0;
}
