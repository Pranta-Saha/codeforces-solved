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


        int n,i,j,sh,sm,eh,em;
        string s,e;
        cin>>s>>e;
        sh=(s[0]-'0')*10 + (s[1]-'0');
        sm=(s[3]-'0')*10 + (s[4]-'0');
        eh=(e[0]-'0')*10 + (e[1]-'0');
        em=(e[3]-'0')*10 + (e[4]-'0');


        int dure=eh-sh;
        if(dure<0) dure+=24;

        dure*=60;
        dure+=(em-sm);

        dure/=2;
        sh+=(dure/60);
        dure%=60;
        sm+=dure;
        if(sm>59)
        {
                sh+=1;
                sm%=60;
        }

        if(sh<10) cout<<'0';
        cout<<sh<<':';
        if(sm<10) cout<<'0';
        cout<<sm;

	return 0;
}
