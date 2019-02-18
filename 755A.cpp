
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

//for all prime upto n.
vector<unsigned long long>prime;
//to checking n is prime or not.
bool chkPrime1to10000000[10000001];

void primeFunction()
{
    unsigned long long i,j;

    for(i=4;i<10000001;i+=2)
        chkPrime1to10000000[i]=1;

    prime.push_back(0); chkPrime1to10000000[1]=1;
    prime.push_back(2);

    for(i=3;i<10000001;i+=2)
    {
        if(chkPrime1to10000000[i]==0)
        {
            prime.push_back(i);

            if(i*i<=10000000)
                for(j=(i*i);j<=10000000;j+=(2*i))
                {
                        chkPrime1to10000000[j]=1;
                }
        }
    }

}

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    ull n,i,j;
    primeFunction();
    cin>>n;

    for(i=1;1;i++)
    {
        j=n*i+1;
        if(chkPrime1to10000000[j]){cout<<i<<endl; return 0;}
    }



	return 0;
}
