
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,len,i;
      string str;
      cin>>str;
      len=str.size();
      set<char>st;
      for(i=0;i<len;i++)
      {
            if(st.find(str[i])!=st.end()) st.erase(str[i]);
            else st.insert(str[i]);
      }
      n=st.size();
      if(n&1 || n==0)
            cout<<"First";
      else
            cout<<"Second";
      st.clear();
      return 0;
}
