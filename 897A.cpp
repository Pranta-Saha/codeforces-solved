#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,l,r;
    string str;
    char c1,c2;

    cin>>n>>m>>str;

    str='$'+str;

    while(m--)
    {
        cin>>l>>r>>c1>>c2;

        for(i=l;i<=r;i++)
        {
            if(str[i]==c1)
                str[i]=c2;
        }
    }

    str.erase(str.begin());
    cout<<str<<endl;

    return 0;
}
