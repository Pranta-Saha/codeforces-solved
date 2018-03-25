#include <bits/stdc++.h>
using namespace std;
int arr[27];

int main()
{
    int n,k;
    char c;

    cin>>n>>k;


    for(int i=1;i<=n;i++)
    {
        cin>>c;
        arr[(int)c-96]++;
    }

    for(int i=1;i<=26;i++)
    {
        if(arr[i]>k) { cout<<"NO"<<endl; return 0; }
    }



    cout<<"YES"<<endl;
    return 0;
}
