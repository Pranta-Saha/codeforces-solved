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

        queue<int>que;
        stack<int>stk;
        int cnt=1;
        que.push(vec[0]);

        for(i=1;i<n;i++)
        {
               if(vec[i-1]==vec[i]) cnt++;
               else cnt=1;

               if(cnt==1) que.push(vec[i]);
               else if(cnt==2) stk.push(vec[i]);
               else{ cout<<"NO"; return 0;}
        }
        cout<<"YES"<<endl;
        cout<<que.size()<<endl;
        while(!que.empty()) {cout<<que.front()<<" "; que.pop();}
        cout<<endl<<stk.size()<<endl;
        while(!stk.empty()) {cout<<stk.top()<<" "; stk.pop();}
	return 0;
}
