#include<bits/stdc++.h>
using namespace std;


int main(){
    map<string,int>mp;
    int n,i;
    cin>>n;
    string str;


    for( i=0;i<n;i++){
        cin>>str;

        if(mp.count(str)==0){
            cout<<"OK"<<endl;
            mp[str]=1;
        }else{
            cout<<str<<mp[str]<<endl;
            mp[str]++;
        }
    }
}
