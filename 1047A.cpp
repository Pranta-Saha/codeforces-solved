#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin>>n;
      int x,y,mx=INT_MIN;

      while(n--)
      {
            cin>>x>>y;
            mx=max(x+y,mx);
      }
      cout<<mx;


      return 0;
}
