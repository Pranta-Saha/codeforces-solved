#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{


        int n,i,j,k,t;
        cin>>n>>k;
        if(n==2)
        {
                cout<<6;
                return 0;
        }
        if(n%2==0)
        {
                if(k>(n/2))
                {
                        k=n-k+1;
                }
        }
        else
        {
                if(k>(n/2 +1))
                {
                        k=n-k+1;
                }
        }

        //cout<<k;
//int tmp=k;
//        int res;
//        if(tmp>1)
//                res=tmp*4;
//        else res=tmp*2;
//        res+=tmp;
//        res+=(n-tmp*2);
//        res+=(n-tmp-1);
//        cout<<res;


        int res=n-1+n;
        res+=(k-1);
        res+=2;

        res+=(k-1);
        res+=(n-k);

        cout<<res;

	return 0;
}
