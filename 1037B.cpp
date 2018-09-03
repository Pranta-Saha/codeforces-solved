#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n;
      long long tmp,mid,res=0,i,diff;
      cin>>n>>mid;
      long long arr[n];


      for(i=0;i<n;i++)
      {
            cin>>arr[i];
      }

      sort(arr,arr+n);

      diff=abs(mid-arr[n/2]);

      if(n==1){cout<<diff; return 0; }
      if(arr[n/2]==mid){ cout<<0; return 0; }

      if(arr[n/2]>mid)
      {
            for(i=n/2;i>=0;i--)
            {
                  if(arr[i]>mid)
                  {
                        res+=(arr[i]-mid);
                  }else break;
            }
            cout<<res; return 0;
      }

      if(mid>arr[n/2])
      {
            for(i=n/2;i<n;i++)
            {
                  if(mid>arr[i]) res+=(mid-arr[i]);
                  else break;
            }
            cout<<res; return 0;
      }

      cout<<diff;


      return 0;
}
