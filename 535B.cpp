#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '0')
        {
            dec_value += 0*base;
            base = base * 2;
        }
        else
        {
            dec_value += 1*base;
            base = base * 2;
        }
    }
    return dec_value;
}

int main()
{
    string str;

    cin>>str;

    int len=str.size();

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4')
            str[i]='0';
        else
            str[i]='1';
    }

    int n=binaryToDecimal(str)+1;

    for(int i=1;i<len;i++)
    {
        n+=pow(2,i);
    }

    cout<<n;

    return 0;
}
