#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[12][12];
    int r,c,i,j,chks=0,cnt=0;

    cin>>r>>c;

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='S')
                {
                    chks=1;
                    break;
                }
            }

            if(chks==0)
            {
                for(j=0;j<c;j++)
                {
                    if(a[i][j]=='.')
                    {
                        cnt++;
                        a[i][j]='#';
                    }
                }
            }
            chks=0;

        }




        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(a[j][i]=='S')
                {
                    chks=1;
                    break;
                }
            }

            if(chks==0)
            {
                for(j=0;j<r;j++)
                {
                    if(a[j][i]=='.')
                    {
                        cnt++;
                        a[j][i]='#';
                    }
                }
            }
            chks=0;

        }

        cout<<cnt<<endl;

        return 0;


}
