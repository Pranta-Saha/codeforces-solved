
#include<bits/stdc++.h>
using namespace std;

int main()
{
      double x,y;
      cin>>x>>y;

      double tmp1=y*log(x);
      double tmp2=x*log(y);

      if(x==y) cout<<"=";
      else if( tmp1>tmp2 ) cout<<">";
      else if(tmp1<tmp2) cout<<"<";
      else cout<<"=";

      return 0;
}

