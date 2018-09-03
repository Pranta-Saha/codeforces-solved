
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,string> PIS;

bool cmp(PIS a, PIS b)
{
      return a.first>b.first;
}

int main()
{
      int n,i;
      string str,str2;
      cin>>n;
      vector<PIS>vec;

      for(i=0;i<n;i++)
      {
            cin>>str;
            vec.push_back(PIS(str.size(),str));
      }

      sort(vec.begin(),vec.end(),cmp);

      for(i=0;i<n-1;i++)
      {
            str=vec[i].second;
            str2=vec[i+1].second;
            if(str.find(str2)==string::npos)
            {
                  cout<<"NO";
                  return 0;
            }
      }
      cout<<"YES"<<endl;

      for(i=n-1;i>=0;i--)
      {
            cout<<vec[i].second<<endl;
      }

      return 0;
}
