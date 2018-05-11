#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,indx=-1,l,r,ll=0,rr=0,mx=INT_MIN,newdif,dif;
    cin>>n;

    vector<int >lft,rght;

    for(i=1;i<=n;i++)
    {
        cin>>l>>r;
        lft.push_back(l);
        rght.push_back(r);

        ll+=l;
        rr+=r;
    }

    dif=abs(ll-rr);

    //mx=abs((ll+rght[0]-lft[0]) - (rr+lft[0]-rght[0]) );

    for(i=0;i<n;i++)
    {
        newdif=abs((ll+rght[i]-lft[i]) - (rr+lft[i]-rght[i]) );
        if( newdif > mx && newdif>dif)
        {
            mx=newdif;
            indx=i;
        }
    }

    cout<<indx+1<<endl;


    return 0;
}
