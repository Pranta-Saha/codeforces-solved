#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,a,b,c,tmp;
    cin>>a>>b>>c;

    if(a<=b) cout<<0;
    else
    {
        tmp=(c/b)*(a-b);
        cout<<(int)ceil(tmp);
    }



	return 0;
}
