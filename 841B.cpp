
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,odd=0,tmp;
      cin>>n;
      while(n--)
      {
            scanf("%d",&tmp);
            if(tmp&1) odd++;
      }

      if(odd!=0)cout<<"First";
      else cout<<"Second";

      return 0;
}
