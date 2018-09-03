#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i,j,sum(0),cnt(0),a,b=0;

      int pos1=0,pos2=0,r,c=0,flag=0,m;

      cin>>n>>m;
      string str;

      for(i=1;i<=n;i++)
      {
            cin>>str;
            pos1=str.find('B');

            if(pos1!=string::npos)
            {
                  if(flag==0) {a=i; b=i; flag=1;}
                  else if(flag==1) {b=i;}

                  pos2=str.find_last_of('B');
                  c=(pos2+pos1+2)/2;
            }

      }

      r=(a+b)/2;

      cout<<r<<" "<<c<<endl;

      return 0;
}
