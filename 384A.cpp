#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,cnt=0,n;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(j%2==1) cnt++;
            }
            else
            {
                if(j%2==0) cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(j%2==1) cout<<'C';
                else cout<<'.';
            }
            else
            {
                if(j%2==0) cout<<'C';
                else cout<<'.';
            }
        }
        cout<<endl;
    }



    return 0;
}
