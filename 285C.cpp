#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,res=0,tmp;

    vector<long long>vec;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>tmp;

        vec.push_back(tmp);
    }

    sort(vec.begin(),vec.begin()+n);

    for(i=1;i<=n;i++)
    {
        res+=( max(vec[i-1],i)-min(vec[i-1],i) );
    }

    cout<<res<<endl;


    return 0;
}
