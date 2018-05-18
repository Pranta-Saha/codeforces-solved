#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,chk0=0,tmp,chk1=0;

    cin>>n;

    string str;

    cin>>str;

    if(n==1 && str=="0")
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(str[i]=='1') {chk0=0;chk1++;}

        if(str[i]=='0'){ chk0++; chk1=0;}


        if((i==1 &&chk0>1) ||  (i==n-1 &&chk0>1)  ||chk0>2 || chk1>1)
        {
            cout<<"No"<<endl;
            return 0;

        }
    }

    cout<<"Yes"<<endl;
    return 0;
}