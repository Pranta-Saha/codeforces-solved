#include<iostream>
using namespace std;

long long dp[5003][5003],a,carr[5003],n,m,k,i,j;

int main(){
	cin>>n>>m>>k;
	for(i=1;i<=n;i++)
        {
                cin>>a;
                carr[i]=carr[i-1]+a;
        }
        for(i=1;i<=k;i++)
        {
                for(j=i*m;j<=n;j++)
                {
                        dp[i][j]=max(dp[i][j-1], dp[i-1][j-m]+carr[j]-carr[j-m] );
                }
        }
        cout<<dp[k][n];
        return 0;

}
