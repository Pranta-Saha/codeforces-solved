#include <bits/stdc++.h>
using namespace std;

int delate0(int n)
{
    string str=to_string(n);

    size_t pos=str.find_first_of('0');

    while(pos!=string::npos)
    {
        str.erase(pos,1);
        pos=str.find_first_of('0');
    }

    return stoi(str);
}


int main()
{
    int a,b,c;

    cin>>a>>b;

    cout<<( ( delate0(a+b)==(delate0(a)+delate0(b)) )?"YES":"NO");

    return 0;
}
