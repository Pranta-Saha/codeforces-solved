#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cnt=0;

    cin>>n;

    if(n>26)
    {
        cout<<-1<<endl;
        return 0;
    }

    char tmp;

    set<char>st;

    for(i=0;i<n;i++)
    {
        cin>>tmp;

        if(st.find(tmp)!=st.end())
        {
            cnt++;

            if((st.size()+cnt)>26)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else
        {
            st.insert(tmp);
        }
    }
    cout<<cnt<<endl;

    return 0;
}
