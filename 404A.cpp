#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,chk=0,i,j;

    char prncpl_dignl, other,tmp;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(chk==0 && i==1 && j==1)
            {
                cin>>prncpl_dignl>>other;
                if(prncpl_dignl==other)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                chk=1;
                j++;
            }
            else
            {
                cin>>tmp;
                if( (i==j || ((i+j)==(n+1)) ) && tmp!=prncpl_dignl )
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if( !(i==j || ((i+j)==(n+1)) )    && (tmp!=other))
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
