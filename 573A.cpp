#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,i,tmp,tmp2;
    cin>>n>>tmp;

    while(tmp%2==0) tmp/=2;
    while(tmp%3==0) tmp/=3;

    for(i=1;i<n;i++)
    {
        cin>>tmp2;
        while(tmp2%2==0) tmp2/=2;
        while(tmp2%3==0) tmp2/=3;

        if(tmp!=tmp2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}
