#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,z,i,cnt=0;
    set<int> st;

    cin>>n>>m>>z;

//    for(i=1;i<=z;i++)
//    {
//        if(i*n>z) break;
//
//        st.insert(i*n);
//
//    }
//
//    for(i=1;i<=z;i++)
//    {
//        if(i*m>z) break;
//
//        if(st.find(i*m)!=st.end())
//            cnt++;
//
//    }

    cout<<z/((m*n)/__gcd(m,n))<<endl;

    return 0;

}
