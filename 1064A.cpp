#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a[5],b,c,n;
      cin>>a[0]>>a[1]>>a[2];

      sort(a,a+3);

      cout<<max(0, a[2]+1-a[1]-a[0]);

      return 0;
}
