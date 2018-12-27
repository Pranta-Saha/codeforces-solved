#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,tmp;
    priority_queue<int>pq;
    cin>>n;
    j=n;
    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        pq.push(tmp);
        while(!pq.empty() && pq.top()==j)
        {
            pq.pop();
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
    }




	return 0;
}
