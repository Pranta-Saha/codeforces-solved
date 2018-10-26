#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,ax,ay,bx,by,cx,cy;
      cin>>n>>ax>>ay>>bx>>by>>cx>>cy;

      if((bx<ax&&cx<ax && by<ay&&cy<ay)||(bx<ax&&cx<ax && by>ay&&cy>ay)||(bx>ax&&cx>ax && by<ay&&cy<ay)||(bx>ax&&cx>ax && by>ay&&cy>ay))
            cout<<"YES";
      else cout<<"NO";


      return 0;
}
