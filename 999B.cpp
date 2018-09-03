
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i;
      string str;
      cin>>n>>str;
      for(i=1;i<=n;i++)
            if(n%i==0)
                  reverse(str.begin(),str.begin()+i);
      cout<<str;

      return 0;
}
