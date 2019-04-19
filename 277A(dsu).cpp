#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int arr[102];

int findd(int a)
{
        if(arr[a]==a) return a;
        return arr[a]=findd(arr[a]);
}

void unionn(int a,int b)
{
        arr[findd(a)]=findd(b);
}


int main()
{

        int m,n,i,j,zero=0;
        cin>>n>>m;
        vector<bool>used(102,0);
        for(i=1;i<=m;i++) arr[i]=i;
        int flag=0;
        int k;
        while(n--)
        {
                cin>>k;
                if(k==0) zero++;
                else flag=1;
                int language1,language2;
                if(k>0) cin>>language1,k--,used[language1]=1;
                while(k--)
                {
                        cin>>language2;
                        used[language2]=1;
                        unionn(language1,language2);
                        language1=language2;
                }
        }

        int cnt=0;
        for(i=1;i<=m;i++)
        {
                if(used[i]==1 && arr[i]==i) cnt++;
        }
        if(flag==0)cout<<cnt+zero;
        else cout<<cnt-1+zero;

	return 0;
}

