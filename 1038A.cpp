
#include<bits/stdc++.h>
using namespace std;

int n,k,i,cnt=INT_MAX,arr[27];
int main()
{
      string str;
      cin>>n>>k>>str;

      for(i=0;i<n;i++)
      {
            arr[str[i]-'A']++;
      }

      for(i=0;i<k;i++)
      {
            cnt=min(arr[i],cnt);
      }

      cout<<cnt*k;

      return 0;
}

