#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool cmp(ull x,ull y)
{
    return x<y;
}

int main()
{
    ull n,x,tmp,total_hour=0,i;

    cin>>n>>x;

    vector<ull>subject;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        subject.push_back(tmp);
    }

    sort(subject.begin(),subject.begin()+n,cmp);

    for(i=0;i<n;i++)
    {
        total_hour+=subject[i]*x;

        x=max((ull)1,x-1);
    }

    cout<<total_hour<<endl;

    return 0;
}
