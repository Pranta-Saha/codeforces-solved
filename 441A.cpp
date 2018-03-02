#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,tmp,i,item,cnt=0;

    queue<int> sellers;

    cin>>n>>v;
    bool chkDealPossible=0;

    for(i=1;i<=n;i++)
    {
        cin>>item;
        for(int j=1;j<=item;j++)
        {
            cin>>tmp;
            if(tmp<v)
            {
                chkDealPossible=1;
            }
        }

        if(chkDealPossible==1)
        {
            cnt++;
            sellers.push(i);
        }
        chkDealPossible=0;
    }

    cout<<cnt<<endl;

    while(!sellers.empty())
    {
        cout<<sellers.front()<<" ";
        sellers.pop();
    }



}
