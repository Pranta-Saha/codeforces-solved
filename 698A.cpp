#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt(0),current=1,tmp,fuse=1;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        if(tmp==0)
        {
            cnt++;
            fuse=1;
        }
        else if(tmp==3)
        {
            current=3-current;

        }
        else
        {
            if(fuse==1)
            {
                current=tmp;
                fuse=0;
            }
            else if(fuse==0)
            {
                if(tmp==current)
                {
                    cnt++;
                    fuse=1;
                }
                current=tmp;
            }
        }
    }

    cout<<cnt<<endl;
    return 0;
}
