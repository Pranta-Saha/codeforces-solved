#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ull i,vlr,vldk;

    cin>>vldk>>vlr;

    for(i=1;1;i++)
    {
        if(vldk<(i*i))
        {
            cout<<"Vladik"<<endl;
            return 0;
        }

        if(vlr<(i*(i+1)))
        {
            cout<<"Valera"<<endl;
            return 0;
        }
    }

    return 0;
}
