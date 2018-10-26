
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,sum;
      string str;
      cin>>str;
      if(str.size()>2)
      {
            str=str.substr(str.size()-2,2);
      }

      n=stoi(str);
      if(n&1) sum=4;
      else sum=1;
      n%=4;
      if(n==1) sum+=6;
      else if(n==2) sum+=9;
      else if(n==3) sum+=6;
      else sum+=3;

      cout<<sum%5;



      return 0;
}


