#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,re;
    cin>>n>>m;

    re=(n%2==0)?(n/2):(n/2)+1;

    while(re%m!=0)
    {
        if(re>=n)
        {
            cout<<-1<<endl;
            return 0;
        }
        re++;
    }

    cout<<re<<endl;

    return 0;
}
