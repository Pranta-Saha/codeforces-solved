#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int a[150005];
queue<int> que;

int main()
{

    ull n,k,re,sum=0,indx=1,i,j,tmp;
    cin>>n>>k;



    for(i=1;i<=k;i++)
    {
        cin>>tmp;
        sum+=tmp;
        que.push(tmp);
        re=sum;

    }

    for(i=k+1;i<=n;i++)
    {
        cin>>tmp;
        que.push(tmp);
        sum+=tmp;
        sum-=que.front();
        que.pop();

        if(sum<re)
        {
            re=sum;
            indx=i-k+1;
        }

    }


    cout<<indx<<endl;


}
