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
        string s;
        cin>>n>>s;
        int sum=0,sum2;
        for(i=0;i<n-1;i++)
        {
                int ok=1;
                sum+=(s[i]-'0');
                int pos=i+1;
                while(pos<n)
                {
                        sum2=s[pos++]-'0';
                        while(pos<n && sum2+s[pos]-'0'<=sum)
                        {
                                sum2+=(s[pos]-'0');
                                pos++;
                        }
                        if(sum2!=sum) ok=0;
                }
                if(ok==1)
                {
                        cout<<"YES";
                        return 0;
                }

        }

        cout<<"NO";
	return 0;
}
