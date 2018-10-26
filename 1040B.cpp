#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,k,rang,tmp=0;
      vector<int>vec;
      cin>>n>>k;

      if(k==0)
      {
            cout<<n<<endl;
            for(i=1;i<=n;i++)
                  cout<<i<<" ";
            return 0;
      }
      if((n/2)<=k)
      {
            cout<<1<<endl<<n/2 + 1;
            return 0;
      }

      rang=2*k +1;

      if(n%rang!=0 && n%rang<(k+1))
            tmp=k+1-(n%rang);

      for(i=k+1-tmp;i<=n;i+=rang)
            vec.push_back(i);

      int sz=vec.size();
      cout<<vec.size()<<endl;

      for(i=0;i<sz;i++)
            cout<<vec[i]<<" ";


      return 0;
}
