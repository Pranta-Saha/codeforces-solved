#include<bits/stdc++.h>
using namespace std;

string b= "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
int cntf(char s, char d)
{
    int cnt=0;
    for(int i=0;i<52;i++)
    {
        if(b[i]==s)
        {
            for(int j=i+1;j<52;j++)
            {
                cnt++;
                if(b[j]==d) return cnt;
            }
        }
    }
}

int main()
{

    string a;
    cin>>a;
    int len=a.size(),i,re=0;
    char tmp='a';

    for(i=0;i<len;i++)
    {
        if(tmp==a[i]) continue;
        re = re + min( cntf(tmp,a[i]) , cntf(a[i],tmp) );
        tmp= a[i];
    }

    cout<<re;


}
