#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,prl=0,link=0;
    string str;
    cin>>str;

    int l=str.size();

    for(i=0;i<l;i++)
    {
        if(str[i]=='o')
            prl++;
        else
            link++;
    }

    if( (prl<=link || link==0) && (prl==0 || link==0 || link%prl==0) )
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
