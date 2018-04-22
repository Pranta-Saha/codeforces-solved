#include <bits/stdc++.h>
using namespace std;

bool current_indx,last;

char BorW[2]={'W','B'};

int main()
{
    int n,m,i,j;

    cin>>n>>m;

    char str[105][105];

    for(i=0;i<=n;i++) str[i][0]='#';
    for(i=0;i<=m;i++) str[0][i]='#';

    for(i=1;i<=n;i++)
    {
        last=current_indx;

        for(j=1;j<=m;j++)
        {
            cin>>str[i][j];

            current_indx=1-current_indx;

            if(str[i][j]=='.')
                str[i][j]=BorW[current_indx];
        }

        if(last==1)
            current_indx=0;
        else
            current_indx=1;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<str[i][j];
        }
        cout<<endl;
    }

    return 0;
}
