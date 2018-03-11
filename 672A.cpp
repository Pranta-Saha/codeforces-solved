#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    cin>>n;
    if(n<10)
    {
        cout<<n;
        return 0;
    }

    int indx=9;
    for(i=10;i<=99;i++)
    {
        indx+=2;
        if(n==indx-1)
        {
            cout<<i/10; return 0;
        }
        else if(n==indx)
        {
            cout<<i%10; return 0;
        }

    }
    for(i;i<=999;i++)
    {
        indx+=3;
        if(n==indx-2)
        {
            cout<<i/100; return 0;
        }
        else if(n==indx-1)
        {
            i=i%100;
            cout<<i/10; return 0;
        }
        else if(n==indx)
        {
            cout<<i%10; return 0;
        }
    }

    cout<<3;


    return 0;
}
