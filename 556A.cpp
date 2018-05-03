#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string str;

    cin>>n>>str;

    for(i=n-1;i>=1;i--)
    {
        if(str[i]!=str[i-1])
        {
            str.erase(i-1,2);

            if(i>(str.size()))
                i=str.size();
        }

    }

    cout<<str.size()<<endl;
    return 0;
}
