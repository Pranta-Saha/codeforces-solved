#include <bits/stdc++.h>
using namespace std;

#define chk(pos,ulim,llim) ( llim<=pos && pos<=ulim)

int main()
{
    int n,k,i,chk;

    string str;

    cin>>n>>k>>str;

    size_t gg=str.find('G');

    int lft=gg-k, rght=gg+k;

    while( chk(lft,gg,0) || chk(rght,n-1,gg) )
    {
        if(chk(lft,gg,0))
        {
            if( str[lft]=='#' ) lft=-1;
            else if(str[lft]=='.') lft-=k;
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }

        if(chk(rght,n-1,gg))
        {
            if(str[rght]=='#') rght=n+1;
            else if(str[rght]=='.') rght+=k;
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
