#include<bits/stdc++.h>
using namespace std;

int i,j,len,arr[5];

int main()
{
      char crr[5];

      string str;
      cin>>str;

      len=str.size();

      for(i=0;i<=3;i++)
      {
            for(j=i;j<len;j+=4)
            {
                  if(str[j]=='!') arr[i]++;
                  else crr[i]=str[j];
            }

      }

      for(i=0;i<4;i++)
            if(crr[i]=='R')
                  cout<<arr[i]<<" ";
      for(i=0;i<4;i++)
            if(crr[i]=='B')
                  cout<<arr[i]<<" ";
      for(i=0;i<4;i++)
            if(crr[i]=='Y')
                  cout<<arr[i]<<" ";
      for(i=0;i<4;i++)
            if(crr[i]=='G')
                  cout<<arr[i];


      return 0;
}

