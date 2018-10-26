
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i;
      cin>>n;

      if(n<=2) {cout<<"No"; return 0;}

      cout<<"Yes"<<endl;

      cout<<n/2<<' ';
      for(i=2;i<=n;i+=2)
            cout<<i<<" ";

      cout<<endl<<n-(n/2)<<" ";

      for(i=1;i<=n;i+=2)
            cout<<i<<" ";


      return 0;
}

