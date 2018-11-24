
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    double n,i,j,k;
    cin>>n>>k;

    long long ans=ceil((2*n)/k)+ ceil((5*n)/k) + ceil((8*n)/k);

    cout<<ans;



	return 0;
}
