#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,drw=0,frst=0,scnd=0,i;
    cin>>a>>b;

    for(i=1;i<=6;i++)
    {
        if(abs(i-a)==abs(i-b)) drw++;
        else if(abs(i-a)<abs(i-b)) frst++;
        else scnd++;
    }

    cout<<frst<<" "<<drw<<" "<<scnd<<endl;
    return 0;
}
