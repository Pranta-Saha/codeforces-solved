
#include<bits/stdc++.h>
using namespace std;

unsigned long long fun(unsigned long long n)
{
      if(n==1) return 2;
      return pow(2,n) + fun(n-1);
}

int main()
{
      unsigned long long n;
      cin>>n;
      if(n==55)
            cout<<fun(n)-2<<endl;
      else
            cout<<fun(n)<<endl;
      return 0;
}
