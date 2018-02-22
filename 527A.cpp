#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a,b,cnt=1,tmp;
    cin>>a>>b;

    while(a-b>0)
    {
        if((a/2)>b)
        {
            cnt=cnt+(a/b);
            tmp=a%b; if(tmp==0) {cnt--; break;}
            a=b;
            b=tmp;
            continue;
        }
        cnt++;
        a=a-b;
        if(a<b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
    }



    cout<<cnt<<endl;

}
