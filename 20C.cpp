
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

class node{
public:
      ll at,prev,cost;
      node(ll a,ll p,ll c){at=a; prev=p; cost=c;}
      node(){}
      bool operator<(const node &a)const{return cost>a.cost;}
};

class edge{
public:
      ll to,w;
      edge(ll t,ll ww){to=t;w=ww;}
      edge(){}
};

vector<edge>adj[200005];
bool visited[200005];
ll perant[200005];
vector<ll>dist(200005,100000000000000000);

void dijkstra(ll src)
{
      priority_queue<node>pq;
      pq.push(node(src,src,0));
      dist[src]=0;

      while(!pq.empty())
      {
            node u=pq.top(); pq.pop();
            if(visited[u.at]) continue;
            visited[u.at]=true;
            perant[u.at]=u.prev;
            dist[u.at]=u.cost;

            ll len=adj[u.at].size();
            for(ll i=0;i<len;i++)
            {
                  ll v=adj[u.at][i].to;
                  if(!visited[v])
                  {
                        pq.push(node(v,u.at,u.cost+adj[u.at][i].w));
                  }
            }
      }
}

void fun(ll n)
{
      if(n==1) {cout<<"1"; return;}
      fun(perant[n]);
      cout<<" "<<n;
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

      ll n,i,j,m,u,v,w;
      cin>>n>>m;
      while(m--)
      {
            cin>>u>>v>>w;
            adj[u].push_back(edge(v,w));
            adj[v].push_back(edge(u,w));
      }
      dijkstra(1);

      //for(i=1;i<=n;i++) cout<<dist[i]<<" ";
      if(!visited[n]) cout<<-1<<endl;
      else fun( n);

	return 0;
}

/* another aproch.

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

class node{
public:
      ll at,cost;
      node(ll a,ll c){at=a; cost=c;}
      node(){}
      bool operator<(const node &a)const{return cost>a.cost;}
};

class edge{
public:
      ll to,w;
      edge(ll t,ll ww){to=t;w=ww;}
};

vector<edge>adj[200005];
bool visited[200005];
ll perant[200005];
vector<ll>dist(200005,100000000000000000);

void dijkstra(ll src)
{
      priority_queue<node>pq;
      pq.push(node(src,0));
      perant[src]=src;
      dist[src]=0;

      while(!pq.empty())
      {
            node u=pq.top(); pq.pop();
            if(dist[u.at]!=u.cost) continue;

            ll len=adj[u.at].size();
            for(int i=0;i<len;i++)
            {
                  ll v=adj[u.at][i].to;
                  if(dist[v]>dist[u.at]+adj[u.at][i].w)
                  {
                        dist[v]=dist[u.at]+adj[u.at][i].w;
                        pq.push(node(v,dist[v]));
                        perant[v]=u.at;
                  }
            }
      }
}

void fun(ll n)
{
      if(n==1) {cout<<"1"; return;}
      fun(perant[n]);
      cout<<" "<<n;
}

int main()
{
//freopen("in.txt","r",stdin);
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

      ll n,i,j,m,u,v,w;
      cin>>n>>m;
      while(m--)
      {
            cin>>u>>v>>w;
            adj[u].push_back(edge(v,w));
            adj[v].push_back(edge(u,w));
      }
      dijkstra(1);
      if(perant[n]==0) cout<<-1<<endl;
      else fun( n);


	return 0;
}
*/
