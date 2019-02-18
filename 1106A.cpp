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


      int n,i,j,cnt=0;
      string str[505];
      cin>>n;
      for(i=0;i<n;i++)
      {
            cin>>str[i];
      }

      for(i=1;i<n;i++)
      {
            for(j=0;j<n;j++)
            {
                  if(i==0 || j==0 || i==n-1 || j==n-1) continue;
                  if(str[i][j]=='X' &&str[i-1][j-1]=='X' &&str[i-1][j+1]=='X' &&str[i+1][j-1]=='X' &&str[i+1][j+1]=='X' )
                        cnt++;
            }
      }

      cout<<cnt;
	return 0;
}
