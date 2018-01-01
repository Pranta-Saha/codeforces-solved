#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cnt=0,cntb=0;
    string a;
    queue<int> que;

    cin>>n>>a;

    for(i=0;i<n;i++)
    {
        if(a[i]=='B')
        {
            cnt++;
            for(j=i;j<n;j++)
            {
                if(a[j]=='B') cntb++;
                else
                {
                    break;
                }
            }

            que.push(cntb);
            cntb=0;
            if(j==n) break;
            i=j;
        }
    }

    cout<<cnt<<endl;
    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }

}
