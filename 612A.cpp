#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,p,q,qq=0,pp=0;
    cin>>n>>p>>q;
    string str;
    cin>>str;

    for(i=0;i<101;i++)
    {
        for(j=0;j<101;j++)
        {
            if((p*i)+(q*j)==n) { pp=i; qq=j; break; }
        }
        if(pp!=0 || qq!=0) break;
    }

    if(i==101 && j==101)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<pp+qq<<endl;
    int pos=0;
    for(i=0;i<pp;i++)
    {
        cout<<str.substr(pos,p)<<endl;
        pos+=p;
    }

    for(i=0;i<qq;i++)
    {
        cout<<str.substr(pos,q)<<endl;
        pos+=q;
    }



	return 0;
}
