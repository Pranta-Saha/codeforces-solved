#include <bits/stdc++.h>
using namespace std;

string makestring(int m,int s)
{
    string str;

    while(s>9)
    {
        str+='9';
        s-=9;
    }

    str+=(s+48);

    str.append((m-str.size()),'0');

    return str;
}

int main()
{
    int m,s;
    string lrgst,smlst;

    cin>>m>>s;

    if(m*9<s || (s==0 && m!=1) )
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    smlst=makestring(m,s-1);

    if(smlst[smlst.size()-1]=='0')
    {
        smlst[smlst.size()-1]='1';
    }
    else
    {
        smlst[smlst.size()-1]=smlst[smlst.size()-1]+1;
    }

    lrgst=makestring(m,s);

    int len=smlst.size();

    char c;

    for(int i=0;i<(unsigned)len/2;i++)
    {
        c=smlst[len-i-1];
        smlst[len-i-1]=smlst[i];
        smlst[i]=c;
    }

    cout<<smlst<<" "<<lrgst<<endl;

    return 0;
}
