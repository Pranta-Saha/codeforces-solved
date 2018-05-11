#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char swp;

    int len=str.size(),i,x,y,last_indx=-1;

    for(i=0;i<len-1;i++)
    {

        x=str[i]-48;
        y=str[len-1]-48;

        if(x%2==0)
        {
            if(x<y)
            {
                swp=str[i];
                str[i]=str[len-1];
                str[len-1]=swp;

                cout<<str<<endl;
                return 0;
            }
            last_indx=i;
        }
    }

    if(last_indx==-1)
        cout<<-1<<endl;
    else
    {
        swp=str[last_indx];
        str[last_indx]=str[len-1];
        str[len-1]=swp;
        cout<<str<<endl;
    }

    return 0;
}
