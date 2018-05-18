#include <bits/stdc++.h>
using namespace std;

int lucky_digits(int n)
{
    string str=to_string(n);

    int cnt=0,pos=str.find_first_of("47");

    while(pos!=string::npos)
    {
        cnt++;
        pos=str.find_first_of("47",pos+1);
    }

    return cnt;
}

int main()
{
    int n,k,i,cnt=0,tmp;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(lucky_digits(tmp)<=k)
            cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
