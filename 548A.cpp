#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int len=str.size(),n,k,i,eachlen;

    cin>>k;  eachlen=len/k;

    if(len%k!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=0;i<len;i+=eachlen)
    {
        string tmp=str.substr(i,eachlen);
        string tmp2=tmp;

        reverse(tmp.begin(),tmp.begin()+eachlen);

        if(tmp2!=tmp)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
