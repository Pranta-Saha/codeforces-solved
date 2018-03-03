#include <bits/stdc++.h>
using namespace std;

#define ull long long

int main()
{
    ull t,n,i,tmp,sum=0,summ=0;

    map<ull,ull> powerof2;
    map<ull,ull>::iterator it;

    for(int i=0;i<=29;i++)
    {
        tmp=pow(2,i);
        sum+=tmp;
        powerof2[tmp]=sum;
    }


    cin>>t;

    while(t--)
    {
        cin>>n;

        it=powerof2.begin();

        while( it->first <= n )
        {
            it++;
        }

        it--;

        summ=(n*(n+1))/2;
        summ=summ-(2*it->second);

        cout<<summ<<endl;
        summ=0;
    }


    return 0;
}
