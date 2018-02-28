#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,tmp;
    multimap<int,int>mp;
    multimap<int,int>::iterator it;
    stack<int>st;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        mp.insert( pair<int,int>(tmp,i) );

    }

    it=mp.begin();
    int day=0,cnt(0);

    while(day<k)
    {
        day+=it->first;
        cnt++;
        st.push( (it->second) );

        if(day>k)
        {
            cnt--;
            st.pop();
            break;
        }
        it++;
        if(it==mp.end()) break;

    }

    cout<<cnt<<endl;

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    mp.clear();





}
