#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    char checkerboard[n][n];

    int ii[4]={1,-1,0,0};
    int jj[4]={0,0,1,-1};

    int i,j,cnt=0,k;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>checkerboard[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<4;k++)
            {
                if( 0<=(i+ii[k]) &&  (i+ii[k] )<n && 0<=(j+jj[k]) && (j+jj[k])<n )
                    if(checkerboard[i+ii[k]][j+jj[k]] =='o' )
                        cnt++;
            }
            if(cnt%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            cnt=0;
        }
    }


    cout<<"YES"<<endl;
    return 0;
}
