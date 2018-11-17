#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    long long mx, n,i,tmp,j,k,tmp2,cnt=0;
    cin>>n>>k>>tmp;
    mx=tmp;

    for(i=1;i<n;i++)
    {
        cin>>tmp2;
        if(tmp>tmp2) cnt++;
        else{ tmp=tmp2; cnt=1; }

        if(cnt==k) { cout<<tmp; return 0; }
        mx=max(mx,tmp2);
    }

    cout<<mx;

	return 0;
}
