#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,tmp;

    cin>>x1>>y1>>x2>>y2;

    if(x1==x2 or y1==y2)
    {
        if(x1==x2 and y1!=y2)
        {
            tmp = abs(y1-y2);
            cout<<x1+tmp<<" "<<y1<<" "<<x2+tmp<<" "<<y2;
        }
        else if(y1==y2 and x1!=x2)
        {
           tmp=abs(x1-x2);
           cout<<x1<<" "<<y1+tmp<<" "<<x2<<" "<<y2+tmp;
        }
        else cout<<"-1";
    }
    else
    {
        if(abs(x1-x2) == abs(y1-y2))
        {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        } else cout<<"-1";

    }
}
