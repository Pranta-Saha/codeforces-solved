#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int len,i,cnt=0;

    len=a.size();

    for(i=0;i<len;i++)
    {
        if(a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='1' or a[i]=='3' or a[i]=='5' or a[i]=='7' or a[i]=='9'  ) cnt++;

    }

    cout<<cnt;
}
