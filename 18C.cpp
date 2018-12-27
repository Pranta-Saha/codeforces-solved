
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j;
    cin>>n;
    vector<int>vec(n,0);

    cin>>vec[0];
    int sum=vec[0];
    for(i=1;i<n;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
        vec[i]+=vec[i-1];
    }
    int cnt=0;
    for(i=0;i<n-1;i++)
    {
        if(vec[i]*2==sum) cnt++;
    }

    cout<<cnt<<endl;



	return 0;
}
