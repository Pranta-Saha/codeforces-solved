
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,j,mnth,day;
    cin>>mnth>>day;

    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int totalday=arr[mnth];

    int otherday=totalday%7;

    int ans=totalday/7;

    if(totalday%7==0 && day==1){ cout<<ans<<endl; return 0;}

    if((8-day)<otherday) ans+=2;
    else ans++;

    cout<<ans<<endl;



	return 0;
}
