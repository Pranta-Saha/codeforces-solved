#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,m,tmp,tmp2=0;
      cin>>n>>m;
      if(n>m) swap(n,m);
      if(max(m%5,n%5)==4) tmp2= min(m%5,n%5);
      if(max(m%5,n%5)==3  && min(m%5,n%5)==2) tmp2=1;
      if(max(m%5,n%5)==3  && min(m%5,n%5)==3) tmp2=2;


      tmp=(m/5)*n + (m%5)*(n/5) + tmp2;
      cout<<tmp;

      return 0;
}
