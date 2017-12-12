#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,narray[105],marray[105],tmp,cnt(0),i,j;
    cin>>n;

    for(i=0;i<n;i++) cin>>narray[i];
    sort(narray,narray+n);

    cin>>m;
    for(i=0;i<m;i++) cin>>marray[i];
    sort(marray,marray+m);

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(marray[j]==narray[i] ){ cnt++; narray[i]=-1; break; }
            else if(marray[j]-1 ==narray[i] ){ cnt++; narray[i]=-1; break; }
            else if(marray[j]+1 ==narray[i] ){ cnt++; narray[i]=-1; break; }
        }

    }

    cout<<cnt;
    return 0;

}
