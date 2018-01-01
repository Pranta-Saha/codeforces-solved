#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp;
    cin>>n;

    map<int , int > mp;

    mp[25]=0;
    mp[50]=0;
    mp[100]=0;

    for(i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp==25) mp[25]++;
        else if(tmp==50)
        {
            if(mp[25]==0) {cout<<"NO"; return 0;}
            else
            {
                mp[50]++;
                mp[25]--;
            }
        } else
        {
            if( mp[25]>2 or ( mp[50]>0 and mp[25]>0 ) )
            {
                if( mp[50]>0 and mp[25]>0)
                {
                    mp[50]--;
                    mp[25]--;

                } else
                {
                    mp[25]-=3;
                }

            } else {cout<<"NO"; return 0;}

        }

    }
    cout<<"YES";
    return 0;
}
