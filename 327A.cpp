#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        cin>>n;
        vector<int>barr(n);
        for(i=0;i<n;i++)
        {
                cin>>j;
                if(j==0) barr[i]=1;
                else {barr[i]=-1; tcs++;}
        }

        int ii,jj,tmp=0,mx=-1;
        for(i=0;i<n;i++)
        {
                tmp+=barr[i];
                if(tmp<0)
                {
                       tmp=0;
                }
                else
                {
                        mx=max(mx,tmp);
                }
        }

        cout<<tcs+mx;
	return 0;
}
