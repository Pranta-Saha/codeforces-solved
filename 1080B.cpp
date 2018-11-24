
#include <bits/stdc++.h>
using namespace std;

int sum(int indx)
{
    if(indx&1)
    {
        return (-1)*(indx/2 + 1);
    }

    return indx/2;

}

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,l,r;
    cin>>n;
    while(n--)
    {
        cin>>l>>r;

        cout<<sum(r)-sum(l-1)<<endl;


    }



	return 0;
}
