#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tmp,n,i,mini=INT_MAX;

    string str;
    vector<int>vec;


    cin>>n>>str;

    for(i=0;i<n;i++)
    {
        cin>>tmp;
        vec.push_back(tmp);
    }

    int pos=str.find_first_of('R');

    while(pos!=string::npos)
    {
        int Lpos=str.find_first_of('L',pos);

        if(Lpos==string::npos)
            break;
        else
        {
            mini=min(mini,vec[Lpos]-vec[Lpos-1]);
        }

        pos=str.find_first_of('R',Lpos);
    }

    if(mini==INT_MAX)
        cout<<-1<<endl;
    else
        cout<<mini/2<<endl;

    return 0;
}
