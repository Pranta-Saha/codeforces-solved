#include <bits/stdc++.h>
using namespace std;
    int n,i,arr[27],mx=-5;

int main()
{
    string str;
    cin>>str;
    int len=str.size();
    for(i=0;i<len;i++)
    {
        int tmp=str[i]-'a';
        arr[tmp]++;
        mx=max(tmp,mx);
    }
    while(arr[mx]--)
    {
        cout<<(char)(mx+'a');
    }

	return 0;
}
