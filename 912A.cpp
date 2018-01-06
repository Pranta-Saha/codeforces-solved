#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long  a,b,yb,gb,bb,yc,bc,re,t1=0,t2=0;

    cin>>a>>b>>yb>>gb>>bb;

    yc=yb*2+gb;
    bc= gb+bb*3;

    if(yc>=a) t1=(yc-a);
    if(bc>=b) t2=(bc-b);

     cout<<t1+t2;


}
