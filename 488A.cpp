#include <bits/stdc++.h>
using namespace std;

bool chk_lukky(int n)
{
    string str=to_string(n);

    return str.find('8')!=string::npos;
}

int main()
{
    int n,cnt=1,i;
    cin>>n;

    for(i=n+1;1;i++)
    {
        if(chk_lukky(abs(i)))
        {
            cout<<cnt<<endl;
            return 0;
        }
        else
            cnt++;
    }

    return 0;
}
