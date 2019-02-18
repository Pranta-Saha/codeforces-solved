#include <bits/stdc++.h>
using namespace std;

vector<int>adj[105];
bool visited[102];

void dfs(int src)
{
    visited[src]=true;
    int len=adj[src].size();
    for(int i=0;i<len;i++)
    {
        int child=adj[src][i];
        if(visited[child]==false)
            dfs(child);
    }
}


int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

    int n,i,j,m,k,tmp,start=0;
    vector<int>language[102];
    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        cin>>k;
        while(k--)
        {
            start=i;
            cin>>tmp;
            language[tmp].push_back(i);
        }
    }

    for(i=1;i<=m;i++)
    {
        int len=language[i].size();
        if(len==1) adj[language[i][0]].push_back(language[i][0]);
        else for(j=1;j<len;j++)
        {
            adj[language[i][j-1]].push_back(language[i][j]);
            adj[language[i][j]].push_back(language[i][j-1]);
        }
    }

    int cnt=0;
    if(start) dfs(start);
    else {cnt++; dfs(1);}

    for(i=1;i<=n;i++)
    {
        if(visited[i]==0) {
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt;

	return 0;
}
