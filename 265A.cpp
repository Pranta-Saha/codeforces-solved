#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,standing=0;

    string s,c;

    cin>>s>>c;

    int len=c.size();

    for(i=0;i<len;i++)
    {
        if(s[standing]==c[i])
            standing++;
    }

    cout<<standing+1<<endl;

    return 0;
}
