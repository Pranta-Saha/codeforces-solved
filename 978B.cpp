#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0,re=0;

    string str;

    cin>>n>>str;

    for(i=0;i<n;i++)
    {
        if(str[i]=='x')
            cnt++;
        else
        {
            if(cnt>2)
                re+=(cnt-2);
            cnt=0;
        }

    }

    if(cnt>2)
        re+=(cnt-2);

    cout<<re<<endl;

    return 0;
}