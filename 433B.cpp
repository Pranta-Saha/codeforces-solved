
#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,i,m,l,r,type;
      cin>>n;
      long long arr[n+5],brr[n+5]; arr[0]=0; brr[0]=0;
      for(i=1;i<=n;i++)
      {
            cin>>arr[i];
            brr[i]=arr[i];
      }
      sort(brr+1,brr+n+1);

      for(i=2;i<=n;i++)
      {
            arr[i]+=arr[i-1];
            brr[i]+=brr[i-1];
      }

      cin>>m;

      while(m--)
      {
            cin>>type>>l>>r;
            if(type==1)
                  cout<<(arr[r]-arr[l-1])<<endl;
            else
                  cout<<(brr[r]-brr[l-1])<<endl;
      }

      return 0;
}


