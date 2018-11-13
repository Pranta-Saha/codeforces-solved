#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string str;
    cin>>n>>str;

    char c=str[0];
    for(i=0;i<n-1;i++)
    {
        if(str[i]>str[i+1]) break;
    }

    str.erase(i,1);

    cout<<str;


	return 0;
}
