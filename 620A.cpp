#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,tmp,cnt=0;

    int sx,sy,dx,dy;

    cin>>sx>>sy>>dx>>dy;

    cout<<max(abs(sx-dx),abs(sy-dy))<<endl;

//    int qurd;
//
//    if(sx==dx)
//    {
//        cout<<abs(sy-dy);
//        return 0;
//    }
//    else if(sy==dy)
//    {
//        cout<<abs(sx-dx);
//        return 0;
//    }
//
//    if( sx<dx && sy<dy )
//        qurd=1;
//    else if( sx<dx && sy>dy )
//        qurd=2;
//    else if( sx>dx && sy>dy )
//        qurd=3;
//    else
//        qurd=4;
////cout<<qurd<<endl;
//
//    int siftx[5]={0,1,1,-1,-1};
//    int sifty[5]={0,1,-1,-1,1};
//
//    int xdif=abs(sx-dx), ydif=abs(sy-dy);
//
//    //cout<<xdif<<" "<<ydif;
//
//    if(ydif<xdif)
//    {
//        sx+=siftx[qurd]*ydif;
//        sy+=sifty[qurd]*ydif;
//    }
//    else
//    {
//        sx+=siftx[qurd]*xdif;
//        sy+=sifty[qurd]*xdif;
//    }
//
////cout<<sx<<" "<<sy;
//
////    while(sx!=dx && sy!=dy)
////    {
////        sx+=siftx[qurd];
////        sy+=sifty[qurd];
////        cnt++;
////    }
////
////
//    if(sx==dx)
//    {
//        cout<<min(xdif,ydif)+abs(sy-dy);
//        return 0;
//    }
//    else if(sy==dy)
//    {
//        cout<<min(xdif,ydif)+abs(sx-dx);
//        return 0;
//    }

    return 0;
}
