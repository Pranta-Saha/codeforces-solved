#include <bits/stdc++.h>
using namespace std;
int b[505];

int main()
{
    int n,k,i,walk_cnt=0,tmp,tmp2;
    cin>>n>>k;

    cin>>tmp;
    b[0]=tmp;

    for(i=1;i<n;i++)
    {
        cin>>tmp2;

        if( tmp2+tmp < k )
        {
            b[i]= tmp2+ ( k-(tmp+tmp2) );

            walk_cnt+=  k-(tmp+tmp2) ;
        }
        else b[i]=tmp2;


        tmp=b[i];
    }
    cout<<walk_cnt<<endl;

    for(i=0;i<n;i++) cout<<b[i]<<" ";
}
