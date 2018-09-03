#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,k,cnt=0;
      string str;
      cin>>str>>k;
      int len=str.size()-1;

      while(k>0 && len>0)
      {
            if(str[len]!='0')
                  cnt++;
            else
                  k--;

            len--;
      }

      if(k==0)
            cout<<cnt;
      else
            cout<<str.size()-1;

      return 0;
}
