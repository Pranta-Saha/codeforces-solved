#include <bits/stdc++.h>
using namespace std;

bool arr[102];

int main()
{
    int n,i,j,tmp,cnt=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>tmp;

            if(tmp==1)
            {
                arr[i]=true;
            }
            else if(tmp==2)
            {
                arr[j]=true;
            }
            else if(tmp==3)
            {
                arr[i]=true;
                arr[j]=true;
            }
        }
    }

    for(i=1;i<=n;i++)
        if(arr[i]==false)
            cnt++;

    cout<<cnt<<endl;

    for(i=1;i<=n;i++)
        if(arr[i]==false)
            cout<<i<<" ";



    return 0;
}
