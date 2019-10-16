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
// ==============================================================================================


vector<ll>first,second;
vector<pii>vec;

class solution{
public:
        ll n,m,i,j;
        void solve2()
        {
                cin>>n;
                for(i=0;i<n;i++) {cin>>j; vec.push_back({j,0}); }
                cin>>m;
                for(i=0;i<m;i++) {cin>>j; vec.push_back({j,1}); }
                sort(all(vec));
                ll dif,a,b,aa,bb;
                a=3*n; b=3*m; dif=a-b;
                aa=a; bb=b;
                for(auto x: vec)
                {
                        if(x.second==0) a--;
                        else b--;
                        if(a-b>dif)
                        {
                                dif=a-b;
                                aa=a; bb=b;
                        }
                }
                cout<<aa<<':'<<bb;
        }

        void solve()
        {
                cin>>n;
                first.resize(n);
                for(i=0;i<n;i++) cin>>first[i];
                cin>>m;
                second.resize(m);
                for(i=0;i<m;i++) cin>>second[i];

                sort(all(first));
                sort(all(second));
                ll a,b;

                vector<ll>::iterator it = upper_bound(all(second),first[0]-1); it--;
                vector<ll>::iterator it_of_a;
                ll aa=n*3;
                ll tmp = (it-second.begin()+1);
                ll bb= tmp*2+(m-tmp)*3;
                ll mx=aa-bb;
//                i=0;
//                while(i+1<n && first[i]==first[i+1]) i++;
//
//                for(;i<n;)
//                {
//                        it=upper_bound(all(second),first[i]);
//                        it--;
//                        tmp=(it-second.begin()+1);
//                        a= (i+1)*2 + (n-i-1)*3;
//                        b=tmp*2 + (m-tmp)*3;
//                        if(mx<a-b)
//                        {
//                                mx=a-b;
//                                aa=a;
//                                bb=b;
//                        }
//                        i++;
//                        while(i+1<n && first[i]==first[i+1]) i++;
//                }

                i=0;
                while(i+1<m && second[i]==second[i+1]) i++;

                for(;i<m;)
                {
                        it=upper_bound(all(first),second[i]);
                        it--;
                        tmp=(it-first.begin()+1);
                        b= (i+1)*2 + (m-i-1)*3;
                        a=tmp*2 + (n-tmp)*3;
                        if(mx<a-b)
                        {
                                mx=a-b;
                                aa=a;
                                bb=b;
                        }
                        i++;
                        while(i+1<m && second[i]==second[i+1]) i++;
                }
                if(mx<(n*2)-(m*2)) {aa=n*2; bb=m*2; mx=aa-bb;}
                if(mx<(n*3)-(m*3)) {aa=n*3; bb=m*3;}
                cout<<aa<<':'<<bb<<endl;
        }
};


int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solution ob;
        ob.solve2();
	return 0;
}




















