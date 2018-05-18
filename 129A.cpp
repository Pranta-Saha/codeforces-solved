#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,odd=0,even=0,i,tmp;

    cin>>n;

    while(n--)
    {
        cin>>tmp;

        sum+=tmp;

        if(tmp&1)
            odd++;
        else
            even++;
    }

    if(sum&1)
        cout<<odd<<endl;
    else
        cout<<even<<endl;

    return 0;
}
