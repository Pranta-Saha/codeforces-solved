#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    string str="";

    if(n&1)
    {
        n/=2;
        for(i=1;i<=n;i++)
        {
            if(i&1)
            {
                str+="aa";
            }
            else
                str+="bb";
        }
        if(i&1)
            str+='a';
        else
            str+='b';
    }
    else
    {
        n/=2;
        for(i=1;i<=n;i++)
        {
            if(i&1)
            {
                str+="aa";
            }
            else
                str+="bb";
        }
    }

    cout<<str<<endl;

    return 0;
}
