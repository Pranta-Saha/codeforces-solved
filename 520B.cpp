#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;

    if(m<n)
    {
        cout<<n-m;
        return 0;
    }
    else
    {
        while(n<m)
        {
            if(m%2==0)
            {
                cnt++;
                m/=2;
            }
            else
            {
                m++;
                cnt++;
            }
        }

    }

    cout<<cnt+n-m;

}
