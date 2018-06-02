#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,len,cnt=0,sum=0,i;
    string str;

    cin>>k>>str;

    multiset<int>st;

    multiset<int>::iterator it;

    len=str.size();

    for(i=0;i<len;i++)
    {
        int tmp=str[i]-'0';
        st.insert(tmp);
        sum+=tmp;
    }

    //cout<<sum;

    int tmp=0;

    it=st.begin();

    while(sum<k)
    {
        sum+=(9-*it);
        cnt++;
        it++;
    }
    cout<<cnt<<endl;

    return 0;
}
