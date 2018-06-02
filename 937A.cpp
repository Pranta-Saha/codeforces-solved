#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp;

    bool flug=false;

    set<int>st;

    cin>>n;

    while(n--)
    {
        cin>>tmp;

        if(tmp==0) flug=true;

        st.insert(tmp);
    }

    cout<<st.size()-flug<<endl;

    return 0;
}
