#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ai,bi,n,re=0,tmp,a,b,i;

    cin>>n>>ai>>bi;

    a=min(ai,bi); b=max(ai,bi);

    if(a%2==1 and b==(a+1) )
    {
        re=1;

    }
     if(re==0)
    {

            for(i=4;i<=256;i+=4)
    {
        if(a<=i and a>(i-4))
        {
            if((i-4)<b and b<=i)
                re=2;
        }
    }

    }
       if(re==0)
    {

            for(i=8;i<=256;i+=8)
    {
        if(a<=i and a>(i-8))
        {
            if((i-8)<b and b<=i)
                re=3;
        }
    }

    }
         if(re==0)
    {


    for(i=16;i<=256;i+=16)
    {
        if(a<=i and a>(i-16))
        {
            if((i-16)<b and b<=i)
                re=4;
        }
    }

    }
        if(re==0)
    {

            for(i=32;i<=256;i+=32)
    {
        if(a<=i and a>(i-32))
        {
            if((i-32)<b and b<=i)
                re=5;
        }
    }

    }
         if(re==0)
    {

            for(i=64;i<=256;i+=64)
    {
        if(a<=i and a>(i-64))
        {
            if((i-64)<b and b<=i)
                re=6;
        }
    }

    }
         if(re==0)
    {

    for(i=128;i<=256;i+=128)
    {
        if(a<=i and a>(i-128))
        {
            if((i-128)<b and b<=i)
                re=7;
        }
    }

    }

    if(re==0) re=8;





    for(i=1;i<=8;i++)
    {
        tmp=pow(2,i);

        if(tmp==n)
        {
            if(re<i) cout<<re;
            else cout<<"Final!";
        }
    }



    return 0;
}
