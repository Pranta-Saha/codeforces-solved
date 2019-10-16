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
        class data{
        public:
                string str;
                int num_of_vowels;
                char last_vowels;
                data(){}
                data(string s, int num, char c)
                {
                        str=s;
                        num_of_vowels=num;
                        last_vowels=c;
                }
                bool operator<(data tmp)
                {
                        if(num_of_vowels==tmp.num_of_vowels) return last_vowels<tmp.last_vowels;
                        return num_of_vowels<tmp.num_of_vowels;
                }
        };

        int n,m,i,j;
        vector<data>vec;
        vector<pair<string,string>>similar,non_similar;

        void solve()
        {
                cin>>n;
                string str;
                data tmp;
                for(i=0;i<n;i++)
                {
                        cin>>str; tmp.str=str;
                        int len=str.size();
                        bool flag=0; int cnt=0;
                        for(j=len-1;j>=0;j--)
                        {
                                if(isvowel(str[j]))
                                {
                                        if(flag==0)
                                        {
                                                tmp.last_vowels=str[j];
                                        }
                                        flag=1; cnt++;
                                }
                        }
                        tmp.num_of_vowels=cnt;
                        vec.push_back(tmp);
                }
                sort(all(vec));
                for(i=0;i<n;i++)
                {
                        //DEBUG(vec[i].str, vec[i].num_of_vowels, vec[i].last_vowels)
                        j=i;
                        while( j+1<n && vec[i].num_of_vowels==vec[j+1].num_of_vowels) j++;
                        if(i==j) continue;
                        bool is_there=0;
                        string stock;
                        int k;
                        for( k=i;k<j;)
                        {
                                if(vec[k].last_vowels==vec[k+1].last_vowels)
                                {
                                        similar.push_back({vec[k].str,vec[k+1].str});
                                        k+=2;
                                }
                                else
                                {
                                        if(is_there==1)
                                                non_similar.push_back({stock,vec[k].str});
                                        else
                                                stock=vec[k].str;
                                        is_there^=1;
                                        k++;
                                }
                        }
                        if( k==j && is_there)
                        {
                                non_similar.push_back({stock,vec[k].str});
                        }
                        i=j;
                }
                int len=similar.size();
                if(similar.size()<=non_similar.size())
                {
                        cout<<len<<endl;
                        for(i=0;i<len;i++)
                        {
                                cout<<non_similar[i].first<<' '<<similar[i].first<<endl;
                                cout<<non_similar[i].second<<' '<<similar[i].second<<endl;
                        }
                }
                else
                {
                        int tmp=non_similar.size();
                        cout<<tmp+((len-tmp)/2)<<endl;
                        for(i=0;i<tmp;i++)
                        {
                                cout<<non_similar[i].first<<' '<<similar[i].first<<endl;
                                cout<<non_similar[i].second<<' '<<similar[i].second<<endl;
                        }
                        for(i;i<len-1;i+=2)
                        {
                                cout<<similar[i+1].first<<' '<<similar[i].first<<endl;
                                cout<<similar[i+1].second<<' '<<similar[i].second<<endl;
                        }
                }

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




















