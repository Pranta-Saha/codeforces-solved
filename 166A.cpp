#include <bits/stdc++.h>
using namespace std;

class teams{
    public:
    int solved,time;
    teams(int s, int t){ solved=s; time=t;  }
    //~teams();
};


bool operator <(teams t1,teams t2)
{
    if(t1.solved>t2.solved) return true;
    if(t1.solved<t2.solved) return false;

    if(t1.time<t2.time) return true;
    return false;
}

int main()
{
    int n,k;
    vector<teams>vec;
    map<teams,int>mp;

    cin>>n>>k;
    while(n--)
    {
    int s,t;
        cin>>s>>t;
        teams t1(s,t);
        vec.push_back(t1);
        mp[t1]++;
    }

    sort(vec.begin(),vec.end());

    teams b=vec[k-1];
    cout<<mp[b];

	return 0;
}
