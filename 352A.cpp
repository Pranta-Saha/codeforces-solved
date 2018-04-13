#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,howmany0or5[6]={0},tmp;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        howmany0or5[tmp]++;
    }

    if(howmany0or5[0]==0)
    {
        cout<<-1<<endl;
    }
    else if(howmany0or5[5]>=9)
    {
        for(i=1;i<=(howmany0or5[5]/9);i++)
            cout<<555555555;

         for(i=1;i<=howmany0or5[0];i++)
            cout<<0;
    }
    else
        cout<<0;


    return 0;
}
