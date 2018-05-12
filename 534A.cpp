#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    cin>>n;

    if(n==2) n--;
    if(n==3)
    {
        cout<<2<<endl<<1<<" "<<3<<endl;
        return 0;
    }

    stack<int> odd,even;

    for(i=1;i<=n;i++)
    {
        if(i&1)
            odd.push(i);
        else
            even.push(i);
    }

    cout<<odd.size()+even.size()<<endl;

    while(!odd.empty())
    {
        cout<<odd.top()<<" ";
        odd.pop();
    }
    while(!even.empty())
    {
        cout<<even.top()<<" ";
            even.pop();
    }

    return 0;
}
