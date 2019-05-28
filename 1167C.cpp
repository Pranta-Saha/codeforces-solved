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
int n,m;


vector<int > adj[500005];
bool visit[500005];
int dstnc[500005],prnt[500005];
int cntt=0;
int gf;

void DSF(int src)
{
        prnt[src]=gf;
        cntt++;

    visit[src]=1;
int sz=adj[src].size();
    for(int i=0;i<sz;i++)
    {

        if(visit[adj[src][i]]==0)
        {

            DSF(adj[src][i]);
        }
    }
}

int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int i,j,t,tcs(0),tmp,k,u,v,cnt(0),len,mx=INT_MIN,mn=INT_MAX, flag=0;
        cin>>n>>m;
        while(m--)
        {
                cin>>k;
                if(k!=0){cin>>u; k--; adj[u].pb(u);}
                while(k--)
                {
                        cin>>v;
                        adj[u].pb(v);
                        adj[v].pb(u);
                }
        }
        for(i=1;i<=n;i++)
        {
                cntt=0;gf=i;
                if(visit[i]==0) {  DSF(i); dstnc[i]=cntt;}
        }
        for(i=1;i<=n;i++)
        {
                cout<<dstnc[prnt[i]]<<' ';
        }

	return 0;
}

