#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,mn,mx;

    cin>>n>>k;

    multiset<int >lenght_of_pw;
    multiset<int >::iterator it;

    string tmp,pw;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        lenght_of_pw.insert(tmp.size());
    }

    cin>>pw;

    it=lenght_of_pw.find(pw.size());

    mn=distance(lenght_of_pw.begin(),it)+1;


    it=lenght_of_pw.upper_bound(pw.size());

    mx=distance(lenght_of_pw.begin(),it);

    //cout<<mn<<" "<<mx<<endl;
    mn=mn+( ((mn%k==0)?(mn/k)-1:mn/k) *5);
    mx=mx+( ((mx%k==0)?(mx/k)-1:mx/k) *5);

    cout<<mn<<" "<<mx<<endl;

    return 0;
}