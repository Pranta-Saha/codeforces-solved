
#include<bits/stdc++.h>
using namespace std;

double R,d,x,y,r;

bool chk()
{
      double ab= x*x + y*y;
      ab=sqrt(ab);
      return (ab+r)<=R && (ab-r)>=(R-d);
      return false;
}

int main()
{
      int cnt=0,n;
      cin>>R>>d>>n;

      while(n--)
      {
            cin>>x>>y>>r;
            if(chk()) cnt++;
      }
      cout<<cnt;

      return 0;
}
