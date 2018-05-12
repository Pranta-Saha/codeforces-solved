#include <bits/stdc++.h>
using namespace std;
#define chk(a ,b) (  1<=a && a<=8 && 1<=b && b<=8  )


int main()
{
    int i,cnt=0,j;

    int ii[]={ -1,-1,-1, 0,0,1 ,1,1 };
    int jj[]={ -1, 0,1, -1,1,-1,0,1 };


    char row,colum;

    cin>>colum>>row;

    int colm=colum-'a'+1;

    int ro=row-'0';

    for(j=0;j<8;j++)
        if(chk( ro+ii[j] , colm+jj[j] ))
            cnt++;

    cout<<cnt<<endl;

    return 0;
}
