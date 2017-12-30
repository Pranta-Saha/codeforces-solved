#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,prime2;
    cin>>n;

    if(n%2==0) prime2=n/2;
    else
    {
        prime2=n/2-1;

        cout<<prime2+1<<endl;

        for(i=0;i<prime2;i++)
        {
            cout<<"2 ";
        }
        cout<<'3';
        return 0;
    }
        cout<<prime2<<endl;

        for(i=0;i<prime2;i++)
        {
            cout<<"2 ";
        }

        return 0;


}
