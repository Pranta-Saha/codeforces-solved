#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,i,j,t,tcs=0,k,m,u,v;

        string str,s,sprime;
        cin>>str;
        int len=str.size();

        int pos=str.find_last_of('a');


        if(pos==string::npos)
        {
                if(len&1) {cout<<":("; return 0;}
                for(i=0;i<len/2;i++)
                {
                        if(str[i]!=str[len/2+i]) {cout<<":("; return 0;}
                }
                for(i=0;i<len/2;i++)
                {
                        cout<<str[i];
                }
                return 0;
        }


        for(i=0;i<=pos;i++)
        {
                if(str[i]!='a')
                        sprime+=str[i];
        }

        while(sprime.size()<len-i)
        {
                sprime+=str[i];
                i++;
        }
        for(i;i<len;i++)
        {
                s+=str[i];
        }

        if(s!=sprime) {cout<<":("; return 0;}
        else
        {
                len=len-sprime.size();
                for(i=0;i<len;i++)
                        cout<<str[i];
        }

	return 0;
}
