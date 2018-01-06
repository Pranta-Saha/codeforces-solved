#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
     ull n,k,i,tmp;

     set<ull> st;
     cin>>n>>k;
     if(k==1) {cout<<n; return 0;}

     for(i=1;i<61;i++)
     {
         tmp= pow(2,i)-1;
         st.insert(tmp);
     }


     if(st.find(n)!=st.end()) {cout<<n; return 0;}

     cout<<*(st.upper_bound(n));


}
