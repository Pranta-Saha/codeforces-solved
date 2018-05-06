#include <bits/stdc++.h>
using namespace std;

int mx=INT_MIN;
vector<int > adj[2001];
bool visit[2001];
queue<int> que;
int dstnc[2001],prnt[2001];


///BFS function start.
        void BFS(int src)
        {
            int nd,parents,child,i,chkb=1,chkp=0;

            que.push(src);
            visit[src]=true;
            prnt[src]=src;

            while(!que.empty())
            {
                parents=que.front();
                que.pop();

                for(i=0; i<adj[parents].size(); i++)
                {
                    child= adj[parents][i];

                    if(visit[child]==0)
                    {
                        que.push(child);
                        visit[child]=true;
                        //cout<<visit[child]<<endl;
                        dstnc[child]=dstnc[parents]+1;
                        prnt[child]=parents;
                    }
                }
            }
        }

///end of BFS function.

int main()
{
    int t,i,n,v,u;

    set<int>st;
    set<int>::iterator it;

    cin>>t;

    for(i=1;i<=t;i++) ///taking input and convert string & saving in map.
    {
        cin>>v;

        if(v==-1)
        {
            st.insert(i);
            continue;
        }

        adj[v].push_back(i);
        //adj[i].push_back(v);
        //cout<<i<<" "<<v<<endl;

    }

    for(it=st.begin();it!=st.end();it++)
    {
        BFS(*it);
    }

    for(i=1;i<=t;i++)
    {
        mx=max(mx,dstnc[i]);
    }

    cout<<mx+1<<endl;

    return 0;
}
