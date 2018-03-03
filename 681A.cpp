#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,before,after;

    cin>>n;

    while(n--)
    {
        cin>>str>>before>>after;

        if(before>=2400 && after>before)
        {
            cout<<"YES";
            return 0;
        }
    }


    cout<<"NO";
    return 0;
}
