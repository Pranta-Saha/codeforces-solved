#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define FRO freopen("in.txt","r",stdin);
int n,m,k;


int jj[4]={0,1,0,-1};
int ii[4]={-1,0,1,0};

class node{
public:
      int i,j;
      node(int a,int b){i=a;j=b;}
      node(){}
};
vector<string>grid(502);
bool visited[505][505];

bool chkbound(node a)
{
      return (0<=a.i && a.i<n && 0<=a.j && a.j<m  && grid[a.i][a.j]!='#' && grid[a.i][a.j]!='X');
      return 0;
}

bool chkok(node a,int i)
{
      node b;
      b.i=a.i+ii[i];
      b.j=a.j+jj[i];
      if(chkbound(b)==0 || visited[b.i][b.j]==1  ) return 1;
      return 0;
}


void dfs(node src)
{
      //cout<<src.i<<"#"<<src.j<<endl;
      int i;
      visited[src.i][src.j]=1;
      for( i=0;i<4;i++)
      {
            node child(src.i+ii[i],src.j+jj[i]);
            if(chkbound(child)==1 && visited[child.i][child.j]==0)
            {
                  dfs(child);
            }
      }

      if(k==0) return;
      for( i=0;i<4;i++)
      {
            if(chkok(src,i)==0) break;
      }
      if(i==4) {grid[src.i][src.j]='X'; k--;}
}





int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


      int i,j;
      cin>>n>>m>>k;
      for(i=0;i<n;i++) cin>>grid[i];


      for(i=0;i<n;i++)
      {
            for(j=0;j<m;j++)
            {
                  if(grid[i][j]=='.')
                  {
                        dfs(node(i,j));
                        i=n;
                        break;
                  }
            }
      }

      //cout<<endl<<endl;
      for(i=0;i<n;i++)
            cout<<grid[i]<<endl;


	return 0;
}
