#include<bits/stdc++.h>
using namespace std;

bool yearchk(int year)
{
    int tmp1=year%10;
    year/=10;
    int tmp2=year%10;
    year/=10;
    int tmp3=year%10;
    year/=10;
    int tmp4=year;

    if(tmp1==tmp2 || tmp1==tmp3 || tmp1==tmp4 || tmp2==tmp3 || tmp2==tmp4 || tmp3==tmp4 )
        return 0;

    return 1;
}

int main()
{
    int  year;

    cin>>year;
    while(year++)
    {
        if(yearchk(year))
        {
            cout<<year;
            return 0;
        }
    }

}
