#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


        int k,n,i,j;
        cin>>n;
        int a[102],b[102];
        for(i=0;i<n;i++)
        {
                cin>>a[i]>>b[i];
        }
        cin>>k;
        for(i=0;i<n;i++)
        {
                if(a[i]<=k && k<=b[i])
                {
                        cout<<(n-i);
                        return 0;
                }
        }



	return 0;
}
