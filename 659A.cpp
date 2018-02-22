#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int re=(((a+b)%n)+n)%n;
    if(re==0) re=n;
    cout<<re;
}
