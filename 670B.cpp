#include<bits/stdc++.h>
using namespace std;

int main()
{
      unsigned long long tmp,i,k;
      cin>>k>>k;

      for(i=1;i<=100000;i++)
      {
            tmp= (i*(i+1))/2;
            if(tmp>=k) break;
      } i--;

      k-= (i*(i+1))/2;

      for(i=1;i<=k;i++) cin>>tmp;

      cout<<tmp;

      return 0;
}
