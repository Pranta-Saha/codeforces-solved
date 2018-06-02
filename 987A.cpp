
#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string,string>mp;
    map<string,string>::iterator it;

    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";

    int n;

    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;
        it=mp.find(str);
        mp.erase(it);
    }

    cout<<mp.size()<<endl;

    while(!mp.empty())
    {
        it=mp.begin();

        cout<<it->second<<endl;
        mp.erase(it);
    }

    return 0;
}
