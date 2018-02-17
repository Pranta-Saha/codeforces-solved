#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,x,childDemond,distress=0;
    unsigned long long conteiner;
    char c;

    cin>>n>>conteiner;

    while(n--)
    {
        cin>>c>>childDemond;
        if(c=='+')
        {
            conteiner+=childDemond;
        }
        else
        {
            if(childDemond<=conteiner)
            {
                conteiner-=childDemond;
            }
            else
            {
                distress++;
            }
        }
    }

    cout<<conteiner<<" "<<distress<<endl;
    return 0;
}
