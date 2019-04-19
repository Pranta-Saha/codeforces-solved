#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int arr[10004]={0};
int read[10004]={0};

int main()
{

        int n,i,j;
        cin>>n;

        for(i=1;i<=n;i++)
        {
                cin>>arr[i];
        }
        int cnt=0;
        for(i=1;i<=n;i++)
        {

                int tmp=arr[i];
                if(read[i]==1) continue;
                if(read[i]==0){ cnt++; read[i]=1;}
                for(j=i+1;j<=tmp;j++)
                {
                        read[j]=1;
                        tmp=max(tmp,arr[j]);

                }
        }
cout<<cnt;


	return 0;
}
