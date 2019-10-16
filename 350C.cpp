#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,pair<int,int>> piii;

        int n,m,i,j,x,y;
        void solve()
        {
                scanf("%d",&n);
                int cnt=0;
                vector<piii>vec;
                for(i=0;i<n;i++)
                {
                        scanf("%d%d",&x,&y);
                        if(x==0 || y==0) cnt++;
                        vec.push_back({abs(x)+abs(y),{x,y}});
                }
                sort(vec.begin(),vec.end());
                printf("%d\n",6*n-cnt*2);
                for(i=0;i<n;i++)
                {
                        x=vec[i].second.first;
                        y=vec[i].second.second;

                        if(x<0) printf("1 %d L\n",abs(x));
                        else if(x>0) printf("1 %d R\n",abs(x));

                        if(y<0) printf("1 %d D\n",abs(y));
                        else if(y>0) printf("1 %d U\n",abs(y));
                        printf("2\n");
                        if(x<0) printf("1 %d R\n",abs(x));
                        else if(x>0) printf("1 %d L\n",abs(x));

                        if(y<0) printf("1 %d U\n",abs(y));
                        else if(y>0) printf("1 %d D\n",abs(y));
                        printf("3\n");
                }

        }



int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
	return 0;
}











