#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,tmp;
    cin>>n>>k;
    map<int,int>mp;
    map<int,int>::iterator it;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        mp[tmp]=i;
    }
    if(mp.size()<k) {cout<<"NO"; return 0;}
    else
    {
        cout<<"YES"<<endl;
        it=mp.begin();
        while(k--)
        {
            cout<<it->second<<" ";
            it++;
        }
    }
    return 0;
}
