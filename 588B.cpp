
#include<bits/stdc++.h>
using namespace std;

set<long long>all_square;
vector<long long>divisors;

void findDivisors(long long n)
{
    for (long long i=1; (i*i)<=n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                divisors.push_back(i);

            else
                {
                  if(i!=1) divisors.push_back(i);
                  divisors.push_back(n/i);
                }
        }
    }
}

bool cheakDivisors(long long n)
{
    for (long long i=1; (i*i)<=n; i++)
    {
        if (n%i == 0)
        {
                if(all_square.find(i)!=all_square.end()) return 0;
                if(all_square.find(n/i)!=all_square.end()) return 0;
        }
    }
    return 1;
}

int main()
{
      long long i;
      for(i=2;i<=1000000;i++)
      {
            all_square.insert(i*i);
      }

      long long n;
      cin>>n;
      findDivisors(n);
      sort(divisors.begin(),divisors.end(),greater<long long>());

      long long sz=divisors.size();

      for(i=0;i<sz;i++)
      {
            if(cheakDivisors(divisors[i]))
            {
                  cout<<divisors[i]<<endl;
                  return 0;
            }
      }
      return 0;
}
