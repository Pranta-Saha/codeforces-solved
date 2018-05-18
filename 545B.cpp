#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,i,j;
    string s,t,nw;

    cin>>s>>t;

    int len=s.size();

    for(i=0;i<len;i++)
    {
        if(s[i]==t[i])
            nw+=s[i];
        else
        {
            cnt++;
            if(cnt&1)
                nw+=s[i];
            else
                nw+=t[i];
        }
    }

    if(cnt&1)
        cout<<"impossible"<<endl;
    else
        cout<<nw<<endl;

    return 0;
}
