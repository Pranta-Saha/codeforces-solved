#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


        int n,i,j,arr[100005],prev,cnt=1,now;
        cin>>n;

        vector<int>vec;
        cin>>prev;
        for(i=1;i<n;i++)
        {
                cin>>now;
                if(now==prev)
                        cnt++;
                else
                {
                        vec.push_back(cnt);
                        cnt=1;
                }
                prev=now;
        }
        vec.push_back(cnt);
        int len=vec.size(),mx=-1;
        for(i=1;i<len;i++)
        {
               mx=max(mx,min(vec[i],vec[i-1])*2);
        }

cout<<mx;

	return 0;
}
