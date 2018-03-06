#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,mid,fst,sec,re;
    cin>>a>>b;

    mid=(a+b)/2;

    fst=abs(a-mid);
    sec=abs(b-mid);

    re= (fst*(fst+1))/2 + (sec*(sec+1))/2;

    cout<<re;

    return 0;
}
