#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> digitque,alphaque;

    string str,tmp="",nulll,str2="";


    cin>>str;

    int len= str.size();
    int i,indxx=0,tmplen;

    if((str[0]==';' || str[0]==',')) {str2+="*,"; }
    else str2+=str[0];
    //cout<<str2<<endl;



    for(int i=1;i<len;i++)
    {
        if( (str[i]==';' || str[i]==',') &&  (str[i-1]==';' || str[i-1]==',') )
        {
            str2+="*,";


        }
        else
        str2+=str[i];
    }

    if((str[len-1]==';' || str[len-1]==',')) { str2+="*";  }
    str2+=",";


//cout<<str2<<endl;

    len=str2.size();

//cout<<len;
    bool chknum=0;


    for(i=0;i<len;i++)
    {

        if(str2[i]==';' || str2[i]==',' )
        {

            tmplen=tmp.size();

            if(tmp[0]=='0' && tmplen==1)
            {
                digitque.push(tmp);
            }
            else
            {
                if(tmp[0]=='0' ) chknum=1;

                for(int j=0;j<tmplen;j++)
                {
                    if(isdigit(tmp[j])) {}
                    else chknum=1;
                }

                if(chknum==1) {alphaque.push(tmp);}
                else {digitque.push(tmp); }
            }



            tmp="";
            chknum=0;

        }
        else
        {

            tmp+=str2[i];
            //cout<<str2[i]<<" "<<endl<<tmp<<" ";
        }

    }

    if(digitque.empty()) cout<<"-"<<endl;
    else
    {
        cout<<"\"";

        while(!digitque.empty())
        {
            cout<<digitque.front();
            digitque.pop();
            if(!digitque.empty()) cout<<",";

        }
        cout<<"\""<<endl;

    }

    if(alphaque.empty()) cout<<"-";
    else
    {
        cout<<"\"";

        while(!alphaque.empty())
        {
            if(alphaque.front()!="*")
                cout<<alphaque.front();

            alphaque.pop();

            if(!alphaque.empty()) cout<<",";

        }
        cout<<"\"";
    }



}
