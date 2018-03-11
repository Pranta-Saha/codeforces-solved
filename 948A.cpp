#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,i,j;
    char arr[505][505];
    cin>>r>>c;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cin>>arr[i][j];

        }
    }

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(arr[i][j]=='S')
            {
                if(arr[i+1][j]=='W'||arr[i-1][j]=='W'||arr[i][j+1]=='W'||arr[i][j-1]=='W')
                {
                    if(arr[i+1][j]!='D'||arr[i-1][j]!='D'||arr[i][j+1]!='D'||arr[i][j-1]!='D')
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
            }
            if(arr[i][j]=='.') arr[i][j]='D';
        }
    }

    cout<<"YES"<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<arr[i][j];

        }cout<<endl;
    }

    return 0;
}
