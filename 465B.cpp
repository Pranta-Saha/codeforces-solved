
#include<bits/stdc++.h>
using namespace std;

int arr[1002];
int main()
{
      int n,i,res=0,cnt=0;
      cin>>n;

      for(i=0;i<n;i++)
            cin>>arr[i];
      for(i=0;i<n;i++)
      {
            if(arr[i]==0)
                  cnt=0;
            else
            {
                  cnt++;
                  if(arr[i+1]==0)
                        res+=(cnt+1);

            }
      }
      res--;
      cout<<max(0,res)<<endl;
      return 0;
}
