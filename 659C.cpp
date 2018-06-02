#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,tmp,cnt=0,sum(0);

    cin>>n>>m;

    set<int>already_have;
    set<int>::iterator it;

    queue<int>neww;

    while(n--)
    {
        cin>>tmp;
        already_have.insert(tmp);
    }

    for(i=1;i<10000000;i++)
    {
        it=already_have.find(i);

        if(it!=already_have.end())
        {
            already_have.erase(it);
        }
        else
        {
            if(sum+i>m)
            {
                break;
            }
            neww.push(i);
            sum+=i;
            cnt++;
        }
    }

    cout<<cnt<<endl;

    while(!neww.empty())
    {
        cout<<neww.front()<<" ";
        neww.pop();
    }

    return 0;
}
