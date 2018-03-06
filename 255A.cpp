#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cst=0,bcp(0),bck(0);
    cin>>n;
    int arr[n+1];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i+=3)
    {
        cst+=arr[i];
    }
    for(int i=2;i<=n;i+=3)
    {
        bcp+=arr[i];
    }
    for(int i=3;i<=n;i+=3)
    {
        bck+=arr[i];
    }

    (cst>bcp)? (cst>bck)?cout<<"chest":cout<<"back" : (bcp>bck)?cout<<"biceps":cout<<"back" ;

    return 0;
}
