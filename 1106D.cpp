#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);


vector<int>adj[100005];
bool visited[100005];
priority_queue<int,vector<int>, greater<int>>pq;

void BFS(int src)
{
      pq.push(src);
      while(!pq.empty())
      {
            int prnt=pq.top();
            pq.pop();
            if(visited[prnt]) continue;
            visited[prnt]=1;
            cout<<prnt<<" ";

            int len=adj[prnt].size();
            for(int i=0;i<len;i++)
            {
                  int child=adj[prnt][i];
                  if(visited[child]==0) pq.push(child);
            }

      }
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


      int n,i,j,m,u,v;
      cin>>n>>m;
      for(i=1;i<=m;i++)
      {
            cin>>u>>v;
            if(u==v)continue;
            adj[u].push_back(v);
            adj[v].push_back(u);
      }

      BFS(1);


	return 0;
}
