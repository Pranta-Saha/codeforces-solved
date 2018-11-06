
#include <bits/stdc++.h>
using namespace std;

int arr[262145];

void prepoccesing(int startindx, bool orORxor)
{
    for(int i=startindx;i<startindx*2;i+=2)
    {
        if(orORxor==1)
            arr[i/2]=arr[i]|arr[i+1];
        else
            arr[i/2]=arr[i]^arr[i+1];
    }
}

void modify(int indx, bool orORxor)
{
    int tmp;
    if(orORxor==1)
        tmp=(indx&1)?arr[indx]|arr[indx-1]:arr[indx]|arr[indx+1];
    else
        tmp=(indx&1)?arr[indx]^arr[indx-1]:arr[indx]^arr[indx+1];

    arr[indx/2]=tmp;

    if(indx/2==1) return;

    modify(indx/2,1-orORxor);
}


int main()
{
    memset(arr,0,262145);
    //cout<<(2|6)<<" "<<(4|5)<<endl<<(6^7);
    int n,m,p,b,i,nn;
    cin>>n>>m;
    n=pow(2,n); nn=n;

    for(i=n;i<n*2;i++)
        cin>>arr[i];
    bool orORxor=1;

    while(nn!=1)
    {
        prepoccesing(nn,orORxor);
        nn/=2;
        orORxor=1-orORxor;
    }

    while(m--)
    {
        cin>>p>>b;
        arr[n+p-1]=b;
        modify(n+p-1,1);
        cout<<arr[1]<<endl;
    }

	return 0;
}
