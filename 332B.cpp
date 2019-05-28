#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[200005],prefixarr[200005],seg_sum[200005];

class solution{
public:
        ll n,m,k,i,mxsum=INT_MIN,a,b,bb;
        void solve()
        {
                prefixarr[0]=0;
                cin>>n>>k;
                for(i=1;i<=n;i++)
                {
                        cin>>arr[i];
                        prefixarr[i]=prefixarr[i-1]+arr[i];
                }
                for(i=n-k+1;i>=1;i--)
                {
                        seg_sum[i]=prefixarr[i+k-1]-prefixarr[i]+arr[i];
                }

                bb=n-k+1;
                for(i=n-(2*k)+1; i>=1; i--)
                {
                        if(seg_sum[bb]<=seg_sum[i+k])
                                bb=i+k;
                        if(mxsum<=(seg_sum[i]+seg_sum[bb]))
                        {
                                mxsum=seg_sum[i]+seg_sum[bb];
                                a=i;
                                b=bb;
                        }
                }
                cout<<a<<' '<<b;
        }
};


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solution ob;
        ob.solve();
	return 0;
}

















