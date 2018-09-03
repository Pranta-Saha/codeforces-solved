#include<bits/stdc++.h>
using namespace std;

int main()
{
      int d,sumtime=0,i,mntime=0,mxtime=0,tmp,tmp1,tmp2;
      cin>>d>>sumtime;

      vector<pair<int,int>>vec;

      for(i=0;i<d;i++)
      {
            cin>>tmp1>>tmp2;
            vec.push_back(make_pair(tmp1,tmp2));
            mntime+=tmp1;
            mxtime+=tmp2;
      }

      if(sumtime<mntime || sumtime>mxtime)
      {
            cout<<"NO"<<endl;
            return 0;
      }
      cout<<"YES"<<endl;
      int arr[d];

      for(i=0;i<d;i++)
      {
            arr[i]=vec[i].first;
      }

      sumtime-=mntime;

      for(i=0;i<d;i++)
      {
            tmp=vec[i].second-arr[i];

            if(tmp<=sumtime)
            {
                  arr[i]+=tmp;
                  sumtime-=tmp;
            }
            else
            {
                  arr[i]+=sumtime;
                  break;
            }
      }

      for(i=0;i<d;i++)
            cout<<arr[i]<<" ";

      return 0;
}
