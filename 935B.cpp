
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,cnt=0,x=0,y=0,pos;
      string str;

      cin>>n>>str;

      if(str[0]=='R') pos=0;
      else pos=1;

      for(i=0;i<n;i++)
      {
            if(str[i]=='R') x++;
            else y++;

            if((x>y && pos==1) || (x<y && pos==0))
            {
                  cnt++;
                  pos=1-pos;
            }
      }
      cout<<cnt;
      return 0;
}
