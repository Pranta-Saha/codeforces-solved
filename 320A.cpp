#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n[11];
    int cnt=0;

    cin>>n;

    for(int i=0;i<strlen(n);i++)
    {
        if(n[i]!='1' && n[i]!='4' )
        {
            cout<<"NO";
            return 0;
        }

        if(n[i]=='4') cnt++;
        else cnt=0;

        if(cnt>2 || n[0]!='1' )
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
