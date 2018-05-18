#include <bits/stdc++.h>
using namespace std;

int main()
{
    int order[123],i;

    string first,line,res;
    char ch;

    cin>>first;

    for(i=0;i<26;i++)
    {
        cin>>ch;
        order[first[i]]=ch;
    }

    cin>>line;

    int len=line.size();

    for(i=0;i<len;i++)
    {
        if(isdigit(line[i]))
            res+=line[i];
        else if(isupper(line[i]))
        {
            res+=(order[line[i]+32]-32);
        }
        else
            res+=order[line[i]];
    }

    cout<<res<<endl;

    return 0;
}
