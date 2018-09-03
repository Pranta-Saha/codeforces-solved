
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,tmp;
      cin>>n;
      for(i=0;i<=31;i++)
      {
            tmp=pow(2,i)-1;
            if(n<=tmp)
            {
                  cout<<i;
                  return 0;
            }
      }


      return 0;
}
