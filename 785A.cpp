#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,face=0;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str[0]=='T') face += 4;
        else if(str[0]=='C') face += 6;
        else if(str[0]=='O') face += 8;
        else if(str[0]=='D') face += 12;
        else if(str[0]=='I') face += 20;

    }

    cout<<face<<endl;


}
