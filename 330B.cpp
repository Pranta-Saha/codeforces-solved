#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define FRO freopen("in.txt","r",stdin);

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


      int n,i,j,m;
      cin>>n>>m;
      bool arr[1003];
      memset(arr,0,sizeof arr);
      while(m--)
      {
            int u,v;
            cin>>u>>v;
            arr[u]=true;
            arr[v]=true;
      }
      i=1;
      while(1)
      {
            if(arr[i]==0) break;
            i++;
      }
      cout<<n-1<<endl;
      for(j=1;j<=n;j++)
            if(j!=i) cout<<i<<" "<<j<<endl;



	return 0;
}
