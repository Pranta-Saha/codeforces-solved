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


        int n,i,j;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
                cin>>arr[i];

        if(n==1){cout<<1;return 0;}
        sort(arr,arr+n);
        i=0;j=0;
        int mx=INT_MIN;
        while(1)
        {
                if(i>j || j>=n) break;
                if(arr[j]-arr[i]<=5)
                {
                        mx=max(mx,j-i+1);
                        j++;
                }
                else i++;
        }

cout<<mx;
	return 0;
}
