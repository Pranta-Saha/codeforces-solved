
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
// ====================================================================

#define SIZE_N 10000000//max 1e8
#define SIZE_P 1000000

bool flag[SIZE_N+5];//true if prime
int primes[SIZE_P+5];

int seive()
{
        int i,j,total=0,val;
        for(i=2;i<=SIZE_N;i++) flag[i]=1;
        val=sqrt(SIZE_N)+1;
        for(i=2;i<val;i++)
                if(flag[i]){
                        for(j=i;j*i<=SIZE_N;j++){
                                if(flag[i*j])
                                {
                                        flag[i*j]=0;
                                }
                        }
                }
        for(i=2;i<=SIZE_N;i++)
                if(flag[i])
                        primes[total++]=i;
        return total;
}


class solution{
public:
        int arr[502][502];
        int n,m;

        void get_data()
        {
                cin>>n>>m;
                for(int i=0;i<n;i++)
                {
                        for(int j=0;j<m;j++)
                        {
                                cin>>arr[i][j];
                        }
                }
        }

        int solve()
        {
                seive();
                int mn=INT_MAX;
                for(int i=0;i<n;i++)
                {
                        int need=0;
                        for(int j=0;j<m;j++)
                        {
                                need+= (*lower_bound(primes,primes+100000,arr[i][j])-arr[i][j]);
                        }
                        mn=min(mn,need);
                        //DEBUG(i, need, mn);
                }

                for(int j=0;j<m;j++)
                {
                        int need=0;
                        for(int i=0;i<n;i++)
                        {
                                need+= (*lower_bound(primes,primes+100000,arr[i][j])-arr[i][j]);
                        }
                        mn=min(mn,need);
                        //DEBUG(j, need, mn);
                }
                cout<<mn;

        }
};


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solution ob;
        ob.get_data();
        ob.solve();

	return 0;
}
























