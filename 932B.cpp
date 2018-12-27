
#include <bits/stdc++.h>
using namespace std;


int gg[1000006];
class pre{
    public:
    int cnount[10]={0,0,0,0,0,0,0,0,0,0};
};

int f(int n)
{
    int tmp=1;
    while(n)
    {
        tmp*=max(1,n%10);
        n/=10;
    }
    return tmp;
}

int g(int n)
{
    if(n<10) return n;

    if(gg[n]!=0) return gg[n];
    return gg[n]=g(f(n));

}

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);
	//memset(gg,100001,-1);
	vector<pre>vec(1000002);

    int n,i,j,l,r,k;
    for(i=1;i<1000002;i++) {
        gg[i] = g(i);

        vec[i].cnount[gg[i]]=1;
    }

    for(i=2;i<=1000001;i++)
    {
        for(j=1;j<=9;j++)
            vec[i].cnount[j]+=vec[i-1].cnount[j];
    }

    int t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        if(l==1)
            cout<<vec[r].cnount[k]<<endl;
        else
            cout<< vec[r].cnount[k]-vec[l-1].cnount[k]<<endl;
    }

	return 0;
}
