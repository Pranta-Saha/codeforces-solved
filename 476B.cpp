#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

int len,pos=0;
string str;
double fun(int i,int nowpos)
{
        if(i==len)
        {
                if(nowpos==pos) return 1.0;
                else return 0;
        }
        if(str[i]=='+') return fun(i+1,nowpos+1);
        else if(str[i]=='-') return fun(i+1,nowpos-1);
        else return ( fun(i+1,nowpos+1) + fun(i+1,nowpos-1) )/2.0;
}


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        string s;
        cin>>s>>str;
        len=s.size();

        for(i=0;i<len;i++)
        {
                if(s[i]=='+') pos++;
                else pos--;
        }

        cout<<fixed<<setprecision(12)<<fun(0,0);


	return 0;
}
