#include <bits/stdc++.h>
using namespace std;
bool arr[101];

int main()
{
    int n,p,q,tmp,i;
    cin>>n;

    cin>>p;

    for(i=1;i<=p;i++)
    {
        cin>>tmp;
        arr[tmp]=1;
    }

    cin>>q;

    for(i=1;i<=q;i++)
    {
        cin>>tmp;
        arr[tmp]=1;
    }

    for(i=1;i<=n;i++)
        if(arr[i]==false)
            {
                cout<<"Oh, my keyboard!"<<endl;
                return 0;
            }

    cout<<"I become the guy."<<endl;

    return 0;
}
