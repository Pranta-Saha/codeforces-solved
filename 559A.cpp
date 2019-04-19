#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        //ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


        int a1,a2,a3,a4,a5,a6,tmp,tmp1;
        cin>>a1>>a2>>a3>>a4>>a5>>a6;
        cout<<(int)pow(a1+a2+a3,2)-(int)pow(a1,2)-(int)pow(a3,2)-(int)pow(a5,2)<<endl;



	return 0;
}
