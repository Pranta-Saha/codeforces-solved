
#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,i,result(0),prev,now;
      cin>>n;

      cin>>prev;
      result+=abs(prev);

      for(i=1;i<n;i++)
      {
            cin>>now;
            result+=abs(now-prev);
            prev=now;
      }

      cout<<result;

      return 0;
}
