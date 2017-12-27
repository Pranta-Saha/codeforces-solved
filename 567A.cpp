#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long int arr[n+5];
    for(i=1;i<=n;i++) cin>>arr[i];
    arr[0]=arr[2];
    arr[n+1]=arr[n-1];

    for(i=1;i<=n;i++)
    {
        cout<<min( abs(arr[i+1]-arr[i]) , abs(arr[i]-arr[i-1]) )<<" "<<max( arr[n]-arr[i] , arr[i]-arr[1] )<<endl;
    }
}

