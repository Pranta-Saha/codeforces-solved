
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,arr[105];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cnt=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i]==0&&arr[i-1]==1&&arr[i+1]==1)
        {
            arr[i+1]=0;
            cnt++;
        }

    }
    cout<<cnt<<endl;

	return 0;
}
