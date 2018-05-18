#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st;

    int n,i,arr[52];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        st.insert(arr[i]);

    }

    cout<<st.size()<<endl;

    for(i=n-1;i>=0;i--)
    {
        if(st.find(arr[i])==st.end())
            arr[i]=0;
        else
            st.erase(arr[i]);
    }

    for(i=0;i<n;i++)
        if(arr[i]!=0)
           cout<<arr[i]<<" ";




    return 0;
}