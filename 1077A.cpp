
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    long long n,i,j,t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k&1)
        {
            cout<<(a*(k/2 + 1))-(b*(k/2))<<endl;

        }
        else
            cout<<(a*(k/2))-(b*(k/2))<<endl;
    }



	return 0;
}
