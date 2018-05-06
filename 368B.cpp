#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,arr[100001],amount[100001],tmp;

    cin>>n>>m;

    set<int >st;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=n;i>0;i--)
    {
        st.insert(arr[i]);

        amount[i]=st.size();
    }

    while(m--)
    {
        cin>>tmp;

        cout<<amount[tmp]<<endl;
    }


    return 0;
}
