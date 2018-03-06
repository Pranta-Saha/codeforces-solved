#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,apoint,bpoint;
    cin>>a>>b>>c>>d;

    apoint=max(((3*a)/10), (a-((a*c)/250)) );
    bpoint=max(((3*b)/10), (b-((b*d)/250)) );

    if(apoint>bpoint) cout<<"Misha";
    else if(apoint<bpoint) cout<<"Vasya";
    else cout<<"Tie";

    return 0;
}
