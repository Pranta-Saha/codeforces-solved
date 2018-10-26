#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,m,a;
      cin>>n>>m;

      if(n==1)
            cout<<1;
      else if(n/2<m)
            cout<<m-1;
      else
            cout<<m+1;

      return 0;
}

