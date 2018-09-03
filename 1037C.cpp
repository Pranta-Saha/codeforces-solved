#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,cnt=0;
      string a,b;
      cin>>n>>a>>b;

      for(i=0;i<n;i++)
      {
            if(i+1<n && a[i]!=b[i] && a[i+1]!=b[i+1] && a[i]!=a[i+1])
            {
                  cnt++;
                  i++;
            }
            else if(a[i]!=b[i]) cnt++;
      }
      cout<<cnt;

      return 0;
}

