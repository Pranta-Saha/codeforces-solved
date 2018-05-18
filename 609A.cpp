#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    return (x>y);
}

int main()
{
    int n,m,i,cnt=0,tmp,sum=0;

    vector<int>usb;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>tmp;
        usb.push_back(tmp);
    }

    sort(usb.begin(),usb.begin()+n,cmp);

    i=0;
    while(sum<m)
    {
        sum+=usb[i++];
        cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
