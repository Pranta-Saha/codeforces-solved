
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int L,v,l,r;
      int t;
      cin>>t;
      while(t--)
      {
            cin>>L>>v>>l>>r;
            cout<< ((l-1)/v) + (L/v) - ((r)/v) <<endl;
      }


      return 0;
}
