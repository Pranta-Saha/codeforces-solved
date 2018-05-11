#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    string str,tmp="";

    cin>>str;

    queue<string>que;


    int len=str.size();

    for(i=0;i<len;i++)
    {
        if(str[i]!='0')
        {
            //tmp="";

            for(j=1;j<=(str[i]-48);j++)
            {
                tmp+='1';

                //str[i]=str[i]-1;

                for(k=i+1;k<len;k++)
                {
                    if(str[k]!='0')
                    {
                        tmp+='1';
                        str[k]-=1;
                    }
                    else
                        tmp+='0';
                }

                que.push(tmp);
                tmp="";

            }
        }
    }


    cout<<que.size()<<endl;

    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }


    return 0;
}
