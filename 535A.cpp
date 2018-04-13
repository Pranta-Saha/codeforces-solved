#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string str[20]={ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven","twelve", "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

    string str2[10]={"0","1","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    if(n<20) cout<<str[n]<<endl;
    else
    {
        cout<<str2[n/10];
        if(n%10) cout<<"-"<<str[n%10]<<endl;
    }

    return 0;
}
