#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

vector<string>vec;
vector<string>rev_vec;
ll dp[100005][2];
ll arr[100005];

ll fun(ll i,bool reverse_korbo_kina)
{
        if(i==0) return reverse_korbo_kina*arr[i];
        if(dp[i][reverse_korbo_kina]!=-1) return dp[i][reverse_korbo_kina];
        ll tmp=1e17;
        if(reverse_korbo_kina)
        {
                if(vec[i-1]<=rev_vec[i]) tmp=min(tmp,fun(i-1,0)+arr[i]);
                if(rev_vec[i-1]<=rev_vec[i]) tmp=min(tmp,fun(i-1,1)+ arr[i]);
        }
        else
        {
                if(vec[i-1]<=vec[i]) tmp=min(tmp,fun(i-1,0));
                if(rev_vec[i-1]<=vec[i]) tmp=min(tmp,fun(i-1,1));
        }
        return dp[i][reverse_korbo_kina]=tmp;
}

int main()
{
        memset(dp,-1,sizeof(dp));
        ll n,i;
        cin>>n;
        for(i=0;i<n;i++)
                cin>>arr[i];
        for(i=0;i<n;i++)
        {
                string str;
                cin>>str;
                vec.push_back(str);
                reverse(str.begin(),str.end());
                rev_vec.push_back(str);
        }
        ll tmp=min(fun(n-1,0),fun(n-1,1));
        if(tmp==1e17) cout<<-1;
        else cout<<tmp;
	return 0;
}

