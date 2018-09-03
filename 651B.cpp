
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int res=0,n,i,tmp;
      cin>>n;

      map<int,int>mp;
      map<int,int>::iterator it;

      for(i=0;i<n;i++)
      {
            cin>>tmp;
            mp[tmp]++;
      }

      while(!mp.empty())
      {
            res+= (mp.size()-1);
            for(it=mp.begin();it!=mp.end(); )
            {
                  tmp=it->first;
                  mp[tmp]--;
                  if(mp[tmp]==0) it=mp.erase(it);
                  else it++;
            }
      }
      cout<<res;
      return 0;
}
