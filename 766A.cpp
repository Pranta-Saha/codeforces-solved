#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    int lenA=a.size(),lenB=b.size();

    if(a==b) cout<<"-1";
    else
    {
        cout<<max(lenA,lenB);
    }

    return 0;
}
