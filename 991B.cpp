#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t,tt,sum(0);

    cin>>n;

    int arr[102];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        sum+=arr[i];
    }

    sort(arr,arr+n);

    double ave=(double)sum/(double)n;

    i=0;
    while(ave<4.5)
    {
        cnt++;

        sum+=5-arr[i];

        ave=(double)sum/(double)n;

        i++;

    }

    cout<<cnt<<endl;

    return 0;
}
