#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,sec1,sec2,cnt=1;

    cin>>n>>c>>sec1;

    while(--n)
    {
        cin>>sec2;

        if(sec2-sec1>c) cnt=1;
        else cnt++;

        sec1=sec2;
    }

    cout<<cnt;

    return 0;
}
