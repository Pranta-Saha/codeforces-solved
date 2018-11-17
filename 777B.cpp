
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
    multiset<int >mori,mori2;
    multiset<int >::iterator it;
    string strsher,strmori;
    cin>>n>>strsher>>strmori;

    for(i=0;i<n;i++)
    {
        mori.insert(strmori[i]-'0');
        mori2.insert(strmori[i]-'0');
    }

    int cnt=0;
    for(i=0;i<n;i++)
    {
        it=mori.find(strsher[i]-'0');
        if(it!=mori.end()) mori.erase(it);
        else if(mori.upper_bound(strsher[i]-'0')!=mori.end())
        {
            it=mori.upper_bound(strsher[i]-'0');
            mori.erase(it);
        }
        else cnt++;
    }
    cout<<cnt<<endl;
    cnt=0;
    for(i=0;i<n;i++)
    {
        it=mori2.upper_bound(strsher[i]-'0');
        if(it!=mori2.end())
        {
            cnt++;
            mori2.erase(it);
        }
        else
        {
            it=mori2.begin();
            mori2.erase(it);
        }
    }
    cout<<cnt;


	return 0;
}
