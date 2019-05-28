#include <bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define memset0(x) memset((x), 0, sizeof(x))
#define memsetM1(x) memset((x), -1, sizeof(x))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef tuple<int, int, int> Tiii;
#define UNIQUE(v) (v).erase(unique((v).begin(), (v).end()), (v).end());
#define all(x) (x).begin(), (x).end()

constexpr ll INF = 1e18;
constexpr int MOD = 998244353;
constexpr double PI = (double)acos(-1);
constexpr double EPS = (double)1e-10;
constexpr int dx[] = {-1, 0, 0, 1, 0, -1, -1, 1, 1};
constexpr int dy[] = {0, -1, 1, 0, 0, 1, -1, 1, -1};
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }

#define bit(n) (1LL << (n))
#define bitset(a, b) (a) |= (1 << (b))
#define bitunset(a, b) (a) &= ~(1 << (b))
#define bitcheck(a, b) ((((a) >> (b)) & 1) == 1)
#define bitcount(a) __builtin_popcountll((a))
inline void bin(ll n){if (n > 1)bin(n>>1); cout<<(n&1);}
inline int binlen(ll x) { if(x==0) return 1; return floor(log2(double(x)))+1;}
#define FRO freopen("in.txt","r",stdin);
#define DEBUG(args...) do {cerr<<#args<<' '; print(args);} while(0);cerr<<endl;
template<typename T> void print(const T& v){cerr<<v<<' ';}
template<typename T1,typename... T2>
void print(const T1& first,const T2&... rest){print(first);print(rest...);}

ll gcd(ll a,ll b) {return b?gcd(b,a%b):a;}
// ====================================================================
ll l,r;
vector<ll>vec;

void fun(ll x)
{
        if(l<=x) vec.pb(x);
        //cout<<x<<endl;
        if(r<=x) return;

        fun(x*10+4);
        fun(x*10+7);
}

//void fun()
//{
//        ll i,j,k;
//        for(i=1;i<=10;i++)
//        {
//                ll lim=pow(2,i);
//                for(j=0;j<lim;j++)
//                {
//                        ll tmp=0;
//                        for(k=i-1;k>=0;k--)
//                        {
//                                if(j&(1<<k)) tmp=(tmp*10)+7;
//                                else tmp=(tmp*10)+4;
//                        }
//                        vec.push_back(tmp);
//                        //cout<<tmp<<endl;
//                }
//        }
//}

int main()
{

        ll n,i,j,t,tcs=0,k,m,u,v;
        cin>>l>>r;
        fun(0);
        sort(all(vec));

        vector<ll>::iterator it;
        for(it=lower_bound(all(vec),l);1;it++)
        {
                ll tmp=min(*it,r);
                tcs=tcs+(tmp-l+1)*(*it);
                l=*it+1;
                if(*it>=r) break;
        }
        cout<<tcs;

	return 0;
}

