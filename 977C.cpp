
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,k,tmp;
      vector<int>vec;
      cin>>n>>k;
      for(i=0;i<n;i++)
      {
            cin>>tmp;
            vec.push_back(tmp);
      }
      sort(vec.begin(),vec.begin()+n);

      if(k==0)
      {
            if(vec[0]==1) cout<<-1;
            else cout<<1;
            return 0;
      }

      if(k!=n)
      {
            if(vec[k-1]==vec[k])
                  cout<<-1;
            else
                  cout<<vec[k-1];
      }
      else cout<<vec[n-1];

      return 0;
}
