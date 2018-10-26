
#include<bits/stdc++.h>
using namespace std;

int main()
{
      double r,x,y,x1,y1,tmp;
      cin>>r>>x>>y>>x1>>y1;

      double dist=sqrt(pow(x-x1,2.0)+pow(y-y1,2.0));
      cout<<ceil(dist/(2.0*r));

      return 0;
}

