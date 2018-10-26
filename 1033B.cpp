#include<bits/stdc++.h>
using namespace std;

//for all prime upto n.
vector< long long>prime;
//to checking n is prime or not.
bool chkPrime1to10000000[10000001];

void primeFunction()
{
      long long i,j;

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

bool chkPrime(long long n)
{
      if(n<10000001) return 1-chkPrime1to10000000[n];
      long long sqrn=sqrt(n)+10;
      for(long long i=1;prime[i]<=sqrn;i++)
      {
            if(n%prime[i]==0) return 0;
      }
      return 1;
}



int main()
{
      long long n,a,b;
      primeFunction();
      cin>>n;


      while(n--)
      {
            cin>>a>>b;
            if(a-b==1 && chkPrime(a+b))
                  cout<<"YES"<<endl;
            else
                  cout<<"NO"<<endl;
      }



      return 0;
}
