#include<bits/stdc++.h>
using namespace std;


long long convertToNumeric(string input){

    long long output(0);
    const int alphaSize(26);
    for(int k = 0; k < input.size(); k++){output = alphaSize * output + (input[k] - 'A' + 1);}
    return output;
}


string convertToAlpha(long long input){

    const int alphaSize(26);
    string output("");

    while(input > 0){
        char letter = 'Z';
        long long inputMod = input % alphaSize;
        if(inputMod > 0){letter = 'A' + inputMod - 1;}
        else{input -= alphaSize;}
        input = input / alphaSize;
        output = letter + output;
    }

    return output;
}

int main()
{
    long long tst,i,sift;
    cin>>tst;
    while(tst--)
    {
        long long lb,x;
        string str,rowstr,colstr;
        cin>>str;

        if(str[0]=='R'&& str.find('C')<str.size()-1 && 1<str.find('C') &&  isdigit(str[1]))
        {
            int cposition=str.find('C');

            rowstr = str.substr(1,cposition-1);
            colstr = str.substr(cposition+1);

            sift=atoll(colstr.c_str());



            cout<<convertToAlpha(sift)<<rowstr<<endl;

        }
        else
        {
            for( i=0;i<str.size();i++)
            {
                if(isdigit(str[i]))
                    break;
            }

            colstr=str.substr(0,i);
            cout<<"R";
            for(i;i<str.size();i++)
                cout<<str[i];
            cout<<'C'<<convertToNumeric(colstr)<<endl;

        }
    }



}
