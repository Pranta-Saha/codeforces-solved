#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,i,digit=0,j=0;
    cin>>n;

    for(i=10;i<=1000000000000;i*=10)
    {
        j++;
        if(n<i)
        {
            n=n-((i/10)-1);

            digit+=(n*j);

            cout<<digit;
            return 0;
        }
        else
        {
            digit+=(9*(i/10)*j);
        }

    }

    return 0;
}
