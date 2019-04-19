#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

int arr[26];

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        string str;
        cin>>n>>k>>str;
        for(i=0;i<n;i++)
        {
                arr[str[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
                if(k<=arr[i]) {arr[i]-=k; break;}
                k-=arr[i];
                arr[i]=0;
        }
        string newstr;
        for(i=n-1;i>=0;i--)
        {
                int id=str[i]-'a';
                if(arr[id]) { newstr+=str[i]; arr[id]--; }
        }
        reverse(newstr.begin(),newstr.end());
        cout<<newstr;

	return 0;
}
