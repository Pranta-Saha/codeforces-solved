#include <bits/stdc++.h>
using namespace std;

#define DEBUG(args...) do {cerr<<#args<<' '; print(args);} while(0);cerr<<endl;
template<typename T> void print(const T& v){cerr<<v<<' ';}
template<typename T1,typename... T2>
void print(const T1& first,const T2&... rest){print(first);print(rest...);}

int dp[500005][27];
char table[500005][27];
int n,m,k;
char str[500005];

int call(int at, int last)
{
        if(at==n) return 0;
        if(dp[at][last]!=-1) return dp[at][last];
        int mn=1e9;
        char c=str[at];
        if(last!=str[at]-'A') mn=call(at+1,str[at]-'A');
        for(int i=0;i<k;i++)
        {
                if(last==i || i==str[at]-'A') continue;
                int tmp=call(at+1,i);
                if(mn>tmp+1)
                {
                        mn=tmp+1;
                        c=i+'A';
                }
        }
        //DEBUG(at, last, c, mn)
        table[at][last]=c;
        return dp[at][last]=mn;
}


int main()
{
//        ios::sync_with_stdio(0);
//        cin.tie(0);
        int i,j;
        for(i=0;i<=500002;i++)
                for(j=0;j<=26;j++)
                        dp[i][j]=-1;
        //cin>>n>>k>>str;
        scanf("%d %d %s",&n,&k,str);
        printf("%d\n",call(0,26));
        //cout<<call(0,26)<<endl;

        char next=26+'A';
        for(i=0;i<n;i++)
        {
                next=table[i][next-'A'];
                //cout<<next;
                printf("%c",next);
        }

	return 0;
}







