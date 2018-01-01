#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long i, n,tmp,oddmini,oddcnt=0,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>tmp;
        sum+=tmp;
        if(tmp%2==1)
        {
            oddcnt++;
            oddmini=min(oddmini,tmp);
        }
    }

    if(oddcnt%2==1) sum-=oddmini;

    cout<<sum;
    return 0;
}
