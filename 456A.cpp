#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,price,quality, i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>price>>quality;
        if(price!=quality)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}
