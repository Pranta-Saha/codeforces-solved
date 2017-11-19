#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n;
    n=str.size();
    if( n==3 && str[0]=='-' && str[2]=='0'  ){  cout<<"0"; return 0;}
    else if(str[0]!='-'){ cout<<str; return 0;}
    else if(str[n-1]<str[n-2]){
        str[n-2]=str[n-1];
        str[n-1]=' ';
    } else str[n-1]=' ';

    cout<<str;
    return 0;

}
