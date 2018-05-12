#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx=INT_MIN,tmp;

    vector<int>vec;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        vec.push_back(tmp);
    }

    stack<int>stk;

    mx=max(mx,vec[n-1]);

    stk.push(0);

    for(i=n-2;i>=0;i--)
    {
        tmp=mx-vec[i]+1;

        stk.push(max(0,tmp));

        mx=max(mx,vec[i]);
    }

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

    return 0;
}
