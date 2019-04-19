#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>vec;

int fact(int n)
{
        if(n==1) return 1;
        return n*fact(n-1);
}
int singleDigitFun(int n)
{
        if(n==1) return 1;
        int chek;
        for(int i=2;1; i++)
        {
                int tmp=fact(i);
                if(n<tmp) return 0;
                if(n%tmp==0) chek=singleDigitFun(n/tmp);
                if(chek==1) {vec.push_back(i); return 1;}
        }
        return 0;
}

bool cmp(int a,int b)
{
        return a>b;
}
int main()
{

        int n,i,j,tmp=1;
        char c;
        cin>>n;
        while(n--)
        {
                cin>>c;
                if(c=='0' || c=='1') continue;
                j=singleDigitFun(fact(c-'0'));
        }

        sort(vec.begin(),vec.end(),cmp);
        int sz=vec.size();
        for(i=0;i<sz;i++)
                cout<<vec[i];
	return 0;
}
