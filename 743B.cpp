
#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,k,tmp;
      cin>>n>>k;

      for(n=1;n<=50;n++)
      {
            tmp=(k-pow(2,(n-1)));
            long long tmp2=pow(2,n);
            tmp = tmp%tmp2;
            if(tmp==0)
            {
                  cout<<n<<endl;
                  return 0;
            }
      }

      return 0;
}
