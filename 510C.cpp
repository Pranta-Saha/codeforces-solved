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
#define precise(a) fixed<<setprecision(a)
#define isvowel(c) c=='a' || c=='e' || c=='i' || c=='o' || c=='u'

#define SQ(x) ((x)*(x))
#define issq(x) (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
#define mem(a,x) memset(a,x,sizeof(a))
#define inf 1e18
#define lg(r,n) (int)(log2(n)/log2(r))
#define fast ios_base::sync_with_stdio(false)
#define one(x) __builtin_popcount(x)

//#define iceil(n, x) (((n) + (x) - 1) / (x))
//return the minimum number >=n , which is divisible by x
//int next_popcount(int n){int c = (n & -n);int r = n+c;int p = r^n;int x = (p>>2)/c;return x  r;}
// Let, n e k ti onBit ache, this func return a serial combination of k onBit.

//struct BIT{
//    vector<ll> Tree;ll Size=0;void init(int n){Tree.assign(n+1,0);Size=n;}
//    void update(int indx,ll val){while(indx<=n){Tree[indx] += val;indx += (indx)&(-indx);}}
//    ll query(int indx){ll sum=0;while(indx>0)
//        {sum += Tree[indx];sum %= mod;indx -= (indx)&(-indx);}return sum;}
//    ll query(int l, int r){return (query(r) - query(l-1)+mod)%mod;}
//};
//ll bigmod(ll a, ll b){if(b==0) return 1%mod;ll x = bigmod(a,b/2);
//    x = (x*x)%mod;if(b%2==1) x = (x*a)%mod;return x;}
//ll egcd(ll a, ll b, ll &x, ll &y){if(a==0){x=0;y=1;return b;}
//    ll x1,y1;ll d =egcd(b%a, a,x1,y1);x = y1-(b/a)*x1;y=x1;return d;}


//have to check;
#define lcase(a) (char)tolower(a)
#define ucase(a) (char)toupper(a)
#define section(a,b,w) set_intersection(a.begin(), a.end(),b.begin(), b.end(),back_inserter(w));
#define union(a,b,w) set_union(a.begin(), a.end(),b.begin(), b.end(),back_inserter(w));
#define copy(a,w) copy(a.begin(), a.end(),back_inserter(w));
//

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
#define oFRO freopen("out.txt","w",stdout);
#define DEBUG(args...) do {cerr<<#args<<' '; print(args);} while(0);cerr<<endl;
template<typename T> void print(const T& v){cerr<<v<<' ';}
template<typename T1,typename... T2>
void print(const T1& first,const T2&... rest){print(first);print(rest...);}
template<class T>constexpr const T&_min(const T&x,const T&y){return x<y?x:y;}template<class T>constexpr const T&_max(const T&x,const T&y){return x<y?y:x;}
template<class T,class...Ts>constexpr const T&_min(const T&x,const Ts&...xs){return _min(x,_min(xs...));}
template<class T,class...Ts>constexpr const T&_max(const T&x,const Ts&...xs){return _max(x,_max(xs...));}
template<class T,class...Ts>void MIN(T&x,const Ts&...xs){x=_min(x,xs...);}template<class T,class...Ts>void MAX(T&x,const Ts&...xs){x=_max(x,xs...);}
#define min(...) _min(__VA_ARGS__)
#define max(...) _max(__VA_ARGS__)

ll gcd(ll a,ll b) {return b?gcd(b,a%b):a;}
// ==============================================================================================

int indegree[26];
vector<int>adj[26];
bool visited[26];

int toi(char c) {return c-'a';}
char toc(int i) {return (char)(i+'a');}

class solution{
public:
        int n,m,i,j;
        vector<string>vec;
        vector<char>ans;
        set<char>st;
        string str;
        void solve()
        {
                cin>>n;
                for(i=0;i<n;i++)
                {
                        cin>>str;
                        vec.push_back(str);
                }
                for(i=1;i<n;i++)
                {

                        int len=min(vec[i-1].size(),vec[i].size());
                        for(j=0;j<len;j++)
                        {
                                if(vec[i-1][j]==vec[i][j]) continue;
                                indegree[vec[i][j]-'a']++;
                                adj[vec[i-1][j]-'a'].push_back(vec[i][j]-'a');
                                break;
                        }
                        if(j==len && vec[i-1].size()>len) {cout<<"Impossible"; return;}
                }
                queue<int>que;
                string ans="";
                for(i=0;i<26;i++)
                        if(indegree[i]==0)
                        {
                                que.push(i);
                                ans+=(i+'a');
                        }
                while(!que.empty())
                {
                        int prnt=que.front(); que.pop();
                        for(auto x:adj[prnt])
                        {
                                indegree[x]--;
                                if(indegree[x]==0)
                                {
                                        que.push(x);
                                        ans+=(x+'a');
                                }
                        }
                }
                for(i=0;i<26;i++)
                {
                        if(indegree[i]!=0) {cout<<"Impossible"; return ;}
                }
                cout<<ans;
        }
};


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solution ob;
        ob.solve();
	return 0;
}













