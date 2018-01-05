#include<bits/stdc++.h>
using namespace std;
#define ull  long long int

ull arr[105];

int main()
{
    ull candidates, city, i,j,tmp,winner;
    long long int mx=-1;
    cin>>candidates>>city;

    for(i=1;i<=city;i++)
    {
        mx=-1;
        for(j=1;j<=candidates;j++)
        {
            cin>>tmp;
            if(tmp>mx)
            {
                winner=j;
                mx=tmp;
            }
        }
        //cout<<winner<<endl;
        arr[winner]++;

    }

    mx=-1;
    for(i=1;i<=101;i++)
    {
        if(arr[i]>mx)
        {
            winner=i;
            mx=arr[i];
        }

    }
    cout<<winner;
}



