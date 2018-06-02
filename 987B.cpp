
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==y || (min(x,y)==2 && max(x,y)==4) )
    {
        cout<<'='<<endl;
        return 0;
    }

    if(x==1 || y==1)
    {
        if(x==1)
            cout<<'<'<<endl;
        else
            cout<<'>'<<endl;
        return 0;
    }

    if(  (min(x,y)==2 && max(x,y)==3) )
    {
        if(x==2)
            cout<<'<'<<endl;
        else
            cout<<'>'<<endl;
        return 0;
    }

    if(x<y)
        cout<<'>'<<endl;
    else if(x>y)
        cout<<'<'<<endl;


    return 0;
}
