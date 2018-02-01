#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,cnt=0;
    cin>>a1>>a2;

    if(a1==1 and a2==1)
    {
        cout<<'0'<<endl;
        return 0;

    }

    while(a1>0 and a2>0)
    {
        cnt++;
        if( a1>a2 )
        {
            a2++;
            a1-=2;
        }
        else
        {
            a1++;
            a2-=2;
        }
    }

    cout<<cnt;
}
