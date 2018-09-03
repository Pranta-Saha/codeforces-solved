
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int m1,n0,i,j,tmp;
      cin>>n0>>m1;

      tmp=ceil((double)m1/(double)2)-1;

      if(tmp<=n0 && m1>=n0)
      {
            for(i=0;i<=n0;i++)
                  if((m1-i)== (n0-i)*2)
                        break;
            if(i==n0+1)
            {
                  for(j=1;j<=n0;j++)
                        cout<<"110";
                  if(m1&1) cout<<"1";
                  else cout<<"11";
                  return 0;
            }
            for(j=1;j<=(n0-i);j++)
                  cout<<"110";
            for(j=1;j<=i;j++)
                  cout<<"10";
      }
      else if(n0==m1+1)
      {
            while(m1--) cout<<"01";
            cout<<"0";
      }
      else cout<<-1;

      return 0;
}

