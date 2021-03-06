
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
#define ALL(x) (x).begin(), (x).end()

constexpr ll INF = 1e18;
constexpr int MOD = 998244353;
constexpr double PI = (double)acos(-1);
constexpr double EPS = (double)1e-10;
constexpr int dx[] = {-1, 0, 0, 1, 0, -1, -1, 1, 1};
constexpr int dy[] = {0, -1, 1, 0, 0, 1, -1, 1, -1};
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

#define bit(n) (1LL << (n))
#define bitset(a, b) (a) |= (1 << (b))
#define bitunset(a, b) (a) &= ~(1 << (b))
#define bitcheck(a, b) ((((a) >> (b)) & 1) == 1)
#define bitcount(a) __builtin_popcountll((a))
inline void bin(ll n){if (n > 1)bin(n>>1); cout<<(n&1);}
inline int binlen(ll x) {return floor(log2(double(x)))+1;}
#define FRO freopen("in.txt","r",stdin);
#define DEBUG(args...) do {cerr<<#args<<' '; print(args);} while(0);cerr<<endl;
template<typename T> void print(const T& v){cerr<<v<<' ';}
template<typename T1,typename... T2>
void print(const T1& first,const T2&... rest){print(first);print(rest...);}

ll gcd(ll a,ll b) {return b?gcd(b,a%b):a;}
// ====================================================================

int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,i,j,t,tcs=0,k,m,u,v;
        cin>>n;
        vector<int>neg,pos;
        int zero=0;
        while(n--)
        {
                cin>>t;
                if(t<0) neg.pb(t);
                else if(t==0) zero++;
                else pos.pb(t);
        }

        cout<<1<<' '<<neg[0];
        if(pos.size()==0)
        {
                cout<<endl<<2<<' '<<neg[1]<<' '<<neg[2];
                cout<<endl<<max(0,(int)(neg.size()-3))+zero<<' ';
                for(i=3;i<neg.size();i++) cout<<neg[i]<<' ';
                while(zero--) cout<<0<<' ';

        }
        else
        {
                cout<<endl<<pos.size()<<' ';
                for(auto e:pos) cout<<e<<' ';
                cout<<endl<<max(0,(int)(neg.size()-1))+zero<<' ';
                for(i=1;i<neg.size();i++) cout<<neg[i]<<' ';
                while(zero--) cout<<0<<' ';

        }
	return 0;
}
