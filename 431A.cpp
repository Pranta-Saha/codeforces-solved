#include<bits/stdc++.h>
using namespace std;

int arr[5],i,sum=0,tmp=0;

int main()
{
    string e;

    cin>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>e;

    i=e.size();

    for(int j= 0;j<i;j++) sum+=arr[ (int)e[j]-48 ];

    cout<<sum;

}
