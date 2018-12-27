#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	map<char,char>mp;
	mp['[']=']';
	mp['{']='}';
	mp['(']=')';
	mp['<']='>';


    int n,i,j,cnt=0;
    string str;
    cin>>str;
    int len=str.size();

    stack<char>stk;
    for(i=0;i<len;i++)
    {
        if(str[i]=='<' || str[i]=='[' || str[i]=='{' || str[i]=='(')
        {
            stk.push(str[i]);
        }
        else
        {
            if(stk.empty())
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            if(mp[stk.top()]!=str[i])
            {
                cnt++;
                stk.pop();
            }
            else
                stk.pop();
        }
    }

    if(stk.empty())
        cout<<cnt<<endl;
    else
        cout<<"Impossible"<<endl;

	return 0;
}
