#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,tmp,cnt=0,indx,i;

    vector<int>hitagi;

    cin>>n>>k;

        if(k>1)
        {
            cout<<"Yes"<<endl;
            return 0;
        }

    for(i=0;i<n;i++)
    {
        cin>>tmp;

        if(tmp==0)
            indx=i;

        hitagi.push_back(tmp);
    }

    cin>>tmp;

    hitagi[indx]=tmp;

    for(i=0;i<n-1;i++)
        if(hitagi[i]>hitagi[i+1])
            {
                cout<<"Yes"<<endl;
                return 0;
            }
    cout<<"No"<<endl;

    return 0;
}
