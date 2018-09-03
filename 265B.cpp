
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,prev=0,cnt=0,now;
      cin>>n;
      for(i=0;i<n;i++)
      {
            cin>>now;
            if(now>=prev)
                  cnt+=(now-prev+1);
            else
                  cnt+=(prev-now+1);
            prev=now;
      }
      cout<<(cnt+n-1);

      return 0;
}
