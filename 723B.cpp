#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool prenthacis=0,separetor=0;

    int n,i,charcnt=0,wordcnt=0,mx=INT_MIN;

    string str;

    cin>>n>>str;

    str='_'+str; str+='_';

    int found=str.find('_');

    while(found!=string::npos)
    {
        if(found>0 &&  (str[found-1]=='_' || str[found-1]=='(' || str[found-1]==')') )
        {
            str.erase(found,1);
            found=str.find('_',found);
            continue;
        }
        if( found<str.size()-1 && (str[found+1]=='(' || str[found+1]==')' ||str[found+1]=='_' ))
        {
            str.erase(found,1);
            found=str.find('_',found);
            continue;
        }

        found=str.find('_',found+1);
    }

    //cout<<str;

    int len=str.size();

    for(i=0;i<len;i++)
    {
        if(str[i]=='_')
        {
            if(prenthacis==0) mx=max(mx,charcnt);

            if(prenthacis==1 && charcnt!=0)
            {
                wordcnt++;
            }
            separetor=1-separetor;
            charcnt=0;
        }
        else if(str[i]=='(' || str[i]==')')
        {
            if(prenthacis==0) mx=max(mx,charcnt);

            if(prenthacis==1 && charcnt!=0)
            {
                wordcnt++;
            }

            prenthacis=1-prenthacis;

            separetor=1-separetor;

            charcnt=0;
        }
        else
        {
            charcnt++;
        }
    }

    cout<<mx<<" "<<wordcnt<<endl;

    return 0;
}

