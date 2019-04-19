#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>adj[200005];
bool visited[200005];
queue<int>que;

void bfs(int src)
{
        visited[src]=1;
        que.push(src);

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();
                int len=adj[prnt].size();
                for(int i=0;i<len;i++)
                {
                        int child=adj[prnt][i];
                        if(visited[child]==0)
                        {
                                visited[child]=1;
                                cout<<prnt<<" "<<child<<endl;
                                que.push(child);
                        }

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

        for(i=0;i<m;i++)
        {
                cin>>u>>v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }
        int mx=INT_MIN,src;
        for(i=1;i<=n;i++)
        {
                int tmp=adj[i].size();
                if(tmp>mx)
                {
                        mx=tmp;
                        src=i;
                }
        }

        bfs(src);


	return 0;
}
