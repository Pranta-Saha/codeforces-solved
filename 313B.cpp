#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,l,i,cnt=0,t,len,arr[100003];
    string str;

    cin>>str>>t;

    len=str.size();

    for(i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
            cnt++;

        arr[i+2]=cnt;
    }

    while(t--)
    {
        cin>>l>>r;

        cout<<arr[r]-arr[l]<<endl;
    }

    return 0;
}
