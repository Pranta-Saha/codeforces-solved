#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, k ,l ,c ,d, p ,nl ,np , x,y,z,mini=1000005;
    cin>>n>> k >>l>> c>> d>> p>> nl>> np;

    x=(k*l)/nl;
    y=c*d;
    z=p/np;

    mini= (x<y)? (x<z)? x: z: (y<z)? y:z;
    cout<<mini/n;

}
