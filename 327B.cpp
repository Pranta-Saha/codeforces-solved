
#include<bits/stdc++.h>
using namespace std;

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
      int n,i,j;
      cin>>n;

      primeFunction();

      for(i=1;i<=n;i++)
            cout<<prime[i]<<" ";


      return 0;
}

