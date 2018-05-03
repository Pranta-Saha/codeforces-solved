#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,t,i,p[]={2,3,5,7},sqr;

    set<unsigned long long >prime_set(p,p+4);
    set<unsigned long long >::iterator it;

    for(i=3;i<100;i++)
    {
        if(!(i%2==0|| i%3==0|| i%5==0|| i%7==0) )
            prime_set.insert(i);
    }

    for(i=100;i<1000000;i++)
    {
        if(i%2==0|| i%3==0|| i%5==0|| i%7==0 ||i%11==0)
            continue;

        sqr=sqrt(i);

        it=prime_set.lower_bound(sqr);

        while(it!=prime_set.begin())
        {
            if(i%(*it)==0) break;
            it--;
        }

        if(it==prime_set.begin())
            prime_set.insert(i);

    }

    cin>>t;

    while(t--)
    {
        cin>>n;
        sqr=sqrt(n);
        if(sqr*sqr==n && prime_set.find(sqr)!=prime_set.end() )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
