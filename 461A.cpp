#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int arr[300005];

int main()
{
    ull  n,i,tmp,sum=0,totalSum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>tmp;
        arr[i]=tmp;
        sum+=tmp;
    }
    totalSum=sum;
    sort(arr,arr+n);

    for(i=0;i<(n-1);i++)
    {
        tmp=arr[i];
        totalSum+=(tmp+(sum-tmp));
        sum=sum-tmp;
    }

    cout<<totalSum<<endl;
}
