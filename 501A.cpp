#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    map<string,string > key_value,value_key;
    map<string,string >::iterator it;

    cin>>n;
    string str,str2;

    while(n--)
    {
        cin>>str>>str2;
        if(value_key.find(str)!=value_key.end())
        {
            key_value[value_key[str]]=str2;
            value_key[str2]=value_key[str];
            value_key.erase(str);
        }
        else
        {
            key_value[str]=str2;
            value_key[str2]=str;
        }
    }

    cout<<key_value.size()<<endl;

    while(!key_value.empty())
    {
        it=key_value.begin();
        cout<<it->first<<" "<<it->second<<endl;
        key_value.erase(it);
    }

	return 0;
}

