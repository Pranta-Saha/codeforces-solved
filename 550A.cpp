#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100005],ab[3]="AB", ba[3]="BA";
    cin>>a;
    char *pntr;

    if( ( (pntr=strstr(a,ab)) and strstr(pntr+2, ba)) or ((pntr=strstr(a,ba)) and strstr(pntr+2, ab)))
        cout<<"YES";
    else cout<<"NO";

    return 0;
}
