#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp,mn1=INT_MAX,mn2=INT_MAX,cnt=0,x,indx;

    cin>>n;

    multiset<int>st1,st2;

    cin>>tmp; x=tmp;

    st1.insert(tmp);

    for(i=1;i<n;i++)
    {

        cin>>tmp;

        if(x>tmp){
            cnt++;
            indx=i;

        }

        if(cnt==0)
            st1.insert(tmp);
        else
            st2.insert(tmp);


        x=tmp;
    }

    if(cnt==0)
    {
        cout<<0;
        return 0;
    }
    else if(cnt==1)
    {
        if( *st1.begin() >= *st2.rbegin())
        {
            cout<<st2.size();
            return 0;

        }
    }


    cout<<-1<<endl;
    return 0;
}
