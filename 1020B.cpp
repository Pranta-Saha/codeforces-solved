#include <bits/stdc++.h>
using namespace std;

int dummy[1001],arr[1001];

int fun(int i)
{
    if(dummy[i]) return i;
    dummy[i]=1;
    return fun(arr[i]);
}

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++) cin>>arr[i];
    for(i=1;i<=n;i++)
    {
        memset(dummy,0,sizeof dummy);
        cout<<fun(i)<<" ";
    }

	return 0;
}
