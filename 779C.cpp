
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

bool cmp(pii a, pii b)
{
      return a.second-a.first > b.second-b.first;
}

int main()
{
      int n,k,i,sum=0,tmp;
      vector<pii>vec;

      cin>>n>>k;
      int arr[n];

      for(i=0;i<n;i++) cin>>arr[i];
      for(i=0;i<n;i++)
      {
            cin>>tmp;
            vec.push_back(pii(arr[i],tmp));
      }
      sort(vec.begin(),vec.end(),cmp);

      for(i=0;i<n;i++)
      {
            if(i<k || (vec[i].second-vec[i].first)>0)
                  sum+=vec[i].first;
            else
                  sum+=vec[i].second;
      }
      cout<<sum;

      return 0;
}

