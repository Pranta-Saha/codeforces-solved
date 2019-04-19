#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v,ans=0;
        cin>>n>>k;
        vector<int>arr(n+1);
        priority_queue<pii>pq;
        bool visited[n+1]={0};
        vector<int>adj[n+1];
        int degree[n+1]={0};

        for(i=1;i<=n;i++)
        {
                cin>>arr[i];
                pq.push({arr[i],i});
        }
        while(k--)
        {
                cin>>u>>v;
                adj[u].push_back(v);
                adj[v].push_back(u);
                degree[u]++;
                degree[v]++;
        }
        while(!pq.empty())
        {
                pii tmp=pq.top();
                pq.pop();
                if(visited[tmp.second]==1 || degree[tmp.second]==0) {visited[tmp.second]=1; continue;}
                visited[tmp.second]=1;
                for(auto child: adj[tmp.second])
                {
                        if(visited[child]==0)
                        {
                                ans+=arr[child];
                                degree[child]--;

                        }
                }
        }
        cout<<ans;


	return 0;
}
