#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,tmp;
    cin>>n;
    while(n--)
    {
        cin>>tmp;
        for(int i=2;i<1000002;i++)
        {
            if(i*i>tmp) break;
            if(i*i==tmp)
            {
                int j;
                for( j=0;j<tmp;j++)
                    if(tmp%j==0) { cout<<"NO"<<endl; i=1000005; break; }


                if(j==tmp) {cout<<"YES"<<endl; break; }

            }
        }
    }
}
