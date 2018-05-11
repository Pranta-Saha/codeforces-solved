#include <bits/stdc++.h>
using namespace std;

int chk(char str[])
{
    int n=stoi(str);
    //cout<<n<<endl;

    int x=n/100, y=(n%100)/10, z=n%10;

    if((x*10+y)%8==0)
    {
        cout<<"YES"<<endl<<(x*10+y)<<endl;
        return 1;
    }
    if((x*10+z)%8==0)
    {
        cout<<"YES"<<endl<<(x*10+z)<<endl;
        return 1;
    }
    if((y*10+z)%8==0)
    {
        cout<<"YES"<<endl<<(y*10+z)<<endl;
        return 1;
    }
    if(n%8==0)
    {
        cout<<"YES"<<endl<<n<<endl;
        return 1;
    }

    return 0;

}

int main()
{
    int n,i,len,j,k;
    string str;

    char tmp[10];

    cin>>str;

    len=str.size();

    for(i=0;i<len;i++)
        if(str[i]=='0' || str[i]=='8')
            {
                cout<<"YES"<<endl<<str[i]<<endl;
                return 0;
            }

    if(len==2 && stoi(str)%8==0)
    {
        cout<<"YES"<<endl<<str<<endl;
        return 0;

    }

    for(i=0;i<len-2;i++)
    {
        for(j=i+1;j<len-1;j++)
        {
            for(k=j+1;k<len;k++)
            {
                tmp[0]=str[i];
                tmp[1]=str[j];
                tmp[2]=str[k];
                tmp[3]='\0';

                n=chk(tmp);
                if(n) return 0;
            }
        }
    }


    cout<<"NO"<<endl;
    return 0;
}
