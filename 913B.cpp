
#include<bits/stdc++.h>
using namespace std;

vector<int>vec[1005];

int chk_spruce(int n)
{
      int cnt=0,len=vec[n].size();
      for(int i=0;i<len;i++)
      {
            int tmp=vec[n][i];
            if(vec[tmp].size()==0)
                  cnt++;
      }
      return cnt;
}

int main()
{
      vec[0].push_back(-1);
      int n,i,tmp;
      cin>>n;

      for(i=1;i<n;i++)
      {
            cin>>tmp;
            vec[tmp].push_back(i+1);
      }

      for(i=1;i<=n;i++)
      {
            if(vec[i].size()!=0 && chk_spruce(i)<3)
            {
                  cout<<"No";
                  return 0;
            }
      }
      cout<<"Yes";
      return 0;
}
