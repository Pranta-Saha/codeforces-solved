
#include<bits/stdc++.h>
using namespace std;

int main()
{
      unsigned long long n,m;
      cin>>n>>m;
      if(m%n==0) n=max((unsigned long long)1,(m/n));
      else n=(m/n)+1;
      cout<<n;


      return 0;
}

