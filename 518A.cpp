#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    string s,t,a;
    cin>>s>>t;
    i=s.size()-1; n=i+1;

    for(i;i>=0;i--)
    {
        if(s[i]!='z')
            break;
    }

    s[i]=(s[i]+1); //cout<<s<<endl;

    for(i=i+1;i<n;i++)
        s[i]='a';

    if(s==t)
        cout<<"No such string"<<endl;
    else
        cout<<s<<endl;



	return 0;
}
