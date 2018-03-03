#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,time,sumoftime(0),tmp;

    queue<int>que;

    cin>>n>>time;

    int arr[n],cnt(0),cntmax(0);

    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        que.push(tmp);
        sumoftime+=tmp;
        cnt++;

        if(sumoftime<=time) cntmax=max(cntmax,cnt);

        while(sumoftime>time && !que.empty())
        {
            cnt--;
            sumoftime-=que.front();
            que.pop();

        }

        cntmax=max(cntmax,cnt);

    }

    cout<<cntmax;

    return 0;
}
