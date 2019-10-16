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



class solution{
public:
        int n,m,i,j;



        // Function for finding sum of larger numbers
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());
//DEBUG( str)
    return str;
}


string cmp(string s, string ss)
{
        if(s.size()==ss.size()) return min(s,ss);
        else if(s.size()<ss.size()) return s;
        else return ss;
}

        void solve()
        {
                int len;
                string str;
                cin>>len>>str;
                int mid=len/2;

                string s1,s2,ans=str;
                if(len&1)
                {
                        if(str[mid]!='0')
                        {
                                s1=str.substr(0,mid);
                                s2=str.substr(mid,len-mid);
                                ans=cmp(ans,findSum(s1,s2));
                                //DEBUG(ans)
                        }
                        if(str[mid+1]!='0')
                        {
                                mid++;
                                s1=str.substr(0,mid);
                                s2=str.substr(mid,len-mid);
                                ans=cmp(ans,findSum(s1,s2));
                                //DEBUG(ans)
                                mid--;
                        }
                }

                while(mid<len && str[mid]=='0') mid++;
                if(mid!=len)
                {
                        s1=str.substr(0,mid);
                        s2=str.substr(mid,len-mid);
                        ans=cmp(ans,findSum(s1,s2));
                        //DEBUG(ans)
                }
                mid=len/2;
                while(mid>=0 && str[mid]=='0') mid--;
                if(mid!=-1)
                {
                        s1=str.substr(0,mid);
                        s2=str.substr(mid,len-mid);
                        ans=cmp(ans,findSum(s1,s2));
                       // DEBUG(ans)
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



















