#include<bits/stdc++.h>
using namespace std;

main()
{
    string a;
    cin>>a;
    int len;
    len=a.size();

    if(a[0]=='9')
    {
        cout<<'9';
    }else if(a[0]>'4')
    {
        cout<<'9'-a[0];
    } else
    {
        cout<<a[0];
    }

    for(int i=1;i<len;i++)
    {
        if(a[i]>'4')
        {
           cout<<'9'-a[i];
        } else
        {
        cout<<a[i];
        }

    }
}

