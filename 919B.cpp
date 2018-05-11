#include <bits/stdc++.h>
using namespace std;

bool sumofdigit(int n)
{
    int sum=0;

    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }

    if(sum==10)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    cin>>n;

    int tmp=19;

    for(int i=1;i<=10000;i++)
    {
        if(sumofdigit(tmp)==0)
            i--;
        else if(n==i)
        {
            cout<<tmp;
            return 0;
        }

        tmp+=9;
    }

    return 0;
}
