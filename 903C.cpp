#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        cin>>n;
        vector<int>vec(n);
        for(i=0;i<n;i++)
                cin>>vec[i];
        sort(vec.begin(),vec.end());
        int small=0,nowcnt=0;
        for(i=0;i<n-1;i++)
        {
                if(vec[i]!=vec[i+1])
                {
                        small+=nowcnt;
                        nowcnt=0;
                }
                else
                {
                        nowcnt++;
                        if(small) small--;
                }
        }
        small+=(nowcnt+1);
        cout<<small;

	return 0;
}
