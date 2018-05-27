#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> for_cost;

vector<int> kkk;
vector<int> adj[100001];
int storage_chack[100001];

int main()
{
    int n,m,k,u,v,cost,i,j,mincost=INT_MAX;

    cin>>n>>m>>k;

    for(i=0;i<m;i++)
    {
        cin>>u>>v>>cost;
        adj[v].push_back(u);
        adj[u].push_back(v);

        pair<int,int>tmp(u,v);

        if(for_cost.find(tmp)==for_cost.end())
            for_cost[tmp]=cost;
        else
            for_cost[tmp]=min(for_cost[tmp],cost);

        pair<int,int>tmp2(v,u);

        if(for_cost.find(tmp2)==for_cost.end())
            for_cost[tmp2]=cost;
        else
            for_cost[tmp2]=min(for_cost[tmp2],cost);

    }

    for(i=0;i<k;i++)
    {
        cin>>u;
        kkk.push_back(u);
        storage_chack[u]=1;
    }


    for(i=0;i<k;i++)
    {
        int storage=kkk[i];

        for(j=0;j<adj[storage].size();j++)
        {
            int now=adj[storage][j];

            if(storage_chack[now]!=1)
            {
                pair<int,int> tmp(storage,now);

                mincost=min(mincost,for_cost[tmp]);
            }
        }
    }

    if(mincost==INT_MAX) mincost=-1;
    cout<<mincost<<endl;

    return 0;
}
