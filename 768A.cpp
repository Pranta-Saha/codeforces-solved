#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx=INT_MIN,mn=INT_MAX,mncnt,mxcnt,tmp;

    cin>>n; i=n;

    while(i--)
    {
        cin>>tmp;

        if(mx<tmp)
        {
            mx=tmp;
            mxcnt=1;
        }
        else if(mx==tmp) mxcnt++;

        if(mn>tmp)
        {
            mn=tmp;
            mncnt=1;
        }
        else if(mn==tmp) mncnt++;

    }

    cout<<(((n-mncnt-mxcnt)<0)?0:(n-mncnt-mxcnt))<<endl;

    return 0;
}
