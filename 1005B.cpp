
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int cnt=0,i;
      string str1,str2;
      cin>>str1>>str2;

      while(!str1.empty() || !str2.empty())
      {
            if(str1.back()==str2.back())
            {
                  str1.pop_back();
                  str2.pop_back();
            }
            else break;
      }

      cout<<(str1.size()+str2.size());

      return 0;
}
