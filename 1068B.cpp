#include<bits/stdc++.h>
using namespace std;


long long countDivisors(long long n)
{
    long long cnt = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else 
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    long long a; cin>>a;
    cout<<countDivisors(a);

    return 0;
}
