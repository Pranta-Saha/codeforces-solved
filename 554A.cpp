#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans;

    string privious_book;
    cin>>privious_book;

    ans=(privious_book.size()+1)*26 - privious_book.size();

    cout<<ans<<endl;

    return 0;
}
