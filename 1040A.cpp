
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,arr[25],res=0,a,b;
      cin>>n>>a>>b;

      for(i=0;i<n;i++)
            cin>>arr[i];
      for(i=0;i<(n/2);i++)
      {
            if((arr[i]==0&&arr[n-i-1]==1)|| (arr[i]==1&&arr[n-i-1]==0))
            {
                  cout<<-1;
                  return 0;
            }
            if(arr[i]==arr[n-i-1] && arr[i]==2)
            {
                  res+= (2*min(a,b));
            }
            else if(arr[i]==arr[n-1-i]) continue;
            else if(arr[i]==0 || arr[n-i-1]==0)
                  res+=a;
            else res+=b;
      }
      if(n&1)
      {
            if(arr[n/2]==2) res+=min(a,b);
      }

      cout<<res;
      return 0;
}
