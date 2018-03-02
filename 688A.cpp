#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,i,maxcnt=0,cnt=0;
    char binary[105];
    cin>>n>>d;

    char *pch;

    for(i=1;i<=d;i++)
    {
        cin>>binary;

        pch=strchr(binary,'0');

        if(pch!=NULL)
        {
            cnt++;
            maxcnt=max(maxcnt,cnt);
        }
        else cnt=0;

    }

    cout<<maxcnt<<endl;
    return 0;
}
