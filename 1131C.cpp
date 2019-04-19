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
        deque<int>dque;
        for(i=0;i<n;i++)
        {
                if(i&1) dque.push_front(vec[i]);
                else dque.push_back(vec[i]);
        }

        while(!dque.empty())
        {
                cout<<dque.front()<<' ';
                dque.pop_front();
        }

	return 0;
}
