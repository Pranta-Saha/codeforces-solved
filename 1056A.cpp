#include <bits/stdc++.h>
using namespace std;

int arr[101];
int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,r,tmp;
    cin>>n; int nn=n;


    while(n--)
    {
        cin>>r;
        while(r--)
        {
            cin>>tmp;
            arr[tmp]++;
        }


    }

for(i=1;i<101;i++)
{

//cout<<arr[i]<<endl;
    if(arr[i]==nn) cout<<i<<" ";
}

	return 0;
}
