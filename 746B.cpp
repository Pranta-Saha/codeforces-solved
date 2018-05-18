#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string str,newstr;

    bool lft=0;

    cin>>n>>str;

    newstr+=str[0];

    if(n&1) lft=1;

    for(i=1;i<n;i++)
    {
        if(lft)
            newstr=str[i]+newstr;
        else
            newstr+=str[i];


        lft=1-lft;
    }

    cout<<newstr<<endl;

    return 0;
}
