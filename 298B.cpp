#include <bits/stdc++.h>
using namespace std;

int n,m;
#define pb(x) push_back(x)
#define memset0(x) memset((x), 0, sizeof(x))
#define memsetM1(x) memset((x), -1, sizeof(x))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef tuple<int, int, int> Tiii;
#define UNIQUE(v) (v).erase(unique((v).begin(), (v).end()), (v).end());
#define all(x) (x).begin(), (x).end()
#define chkbnd(i,j) 0<=i && i<n && 0<=j && j<m

constexpr ll INF = 1e18;
constexpr int MOD = 998244353;
constexpr double PI = (double)acos(-1);
constexpr double EPS = (double)1e-10;
constexpr int dx[] = {0,1,0,-1};
constexpr int dy[] = {1,0,-1,0};
constexpr int dxx[] = {-1, 0, 0, 1, 0, -1, -1, 1, 1};
constexpr int dyy[] = {0, -1, 1, 0, 0, 1, -1, 1, -1};
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
// ====================================================================

int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,i,j,t,tcs=0,k,m,u,v;
        int sx,sy,ex,ey;
        string str;
        cin>>n>>sx>>sy>>ex>>ey>>str;
        for(i=0;i<=n;i++)
        {
                if(sx==ex && sy==ey) {tcs=1;break;}
                if(i==n) break;
                int x=sx,y=sy;
                if(str[i]=='E') {x+=dx[1]; y+=dy[1]; }
                if(str[i]=='S') {x+=dx[2]; y+=dy[2]; }
                if(str[i]=='W') {x+=dx[3]; y+=dy[3]; }
                if(str[i]=='N') {x+=dx[0]; y+=dy[0]; }
                if(abs(ex-x)<abs(ex-sx) || abs(ey-y)<abs(ey-sy) ) { sx=x; sy=y; }
        }
        if(tcs==0) cout<<-1;
        else cout<<i;
	return 0;
}




