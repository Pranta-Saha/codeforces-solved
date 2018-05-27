#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;

    cin>>n;

    char bit;

    for(i=0;i<n;i++)
    {
        cin>>bit;

        if(bit=='1')
            cnt++;
        else
            break;
    }

    cnt++;

    cout<<((cnt==n+1)?n:cnt)<<endl;

    return 0;
}
