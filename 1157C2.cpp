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



int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,i,j,t,tcs=0,k,m,u,v;
        string str,str2;
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
                cin>>arr[i];

        {
                int l=0,r=n-1,last=-1;
                while(l<=r)
                {
                        if(last<arr[l] && last<arr[r])
                        {
                                if(arr[l]<arr[r]) str.push_back('L'), last=arr[l++];
                                else str.push_back('R'), last=arr[r--];
                        } else if( last<arr[l]) str.push_back('L'), last=arr[l++];
                        else if( last<arr[r] )str.push_back('R'), last=arr[r--];
                        else break;
                }

        }
        {
                int l=0,r=n-1,last=-1;
                while(l<=r)
                {
                        if(last<arr[l] && last<arr[r])
                        {
                                if(arr[l]<=arr[r]) str2.push_back('L'), last=arr[l++];
                                else str2.push_back('R'), last=arr[r--];
                        } else if( last<arr[l]) str2.push_back('L'), last=arr[l++];
                        else if( last<arr[r] )str2.push_back('R'), last=arr[r--];
                        else break;
                }
        }
        if(str.size()<str2.size()) swap(str,str2);
        cout<<str.size()<<endl<<str;

	return 0;
}














