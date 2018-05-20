#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,i,j,tmp;

        cin>>x;

        if(x%3==0 || x%7==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            int chk=1;
            for(i=1;i<35;i++)
            {
                tmp=x-(i*3);
                if( tmp>0 && tmp%7==0  )
                {
                    cout<<"YES"<<endl;
                    chk=0;
                    break;
                }
            }

            if(chk)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
