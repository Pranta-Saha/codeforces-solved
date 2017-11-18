#include<bits/stdc++.h>
using namespace std;
map<string,int> mp,newmap;
main(){

    int n,i,j,pnt[1005],pn,mx=-1005;    cin>>n;
    string name[1005],nam;


    for(i=0;i<n;i++){
        cin>>nam>>pn;
        name[i]=nam; pnt[i]=pn;

        if(mp.find(nam)!=mp.end()) mp[nam]+=pn;
        else mp[nam]=pn;
    }


    for(map<string,int>::iterator it= mp.begin(); it!=mp.end(); it++  ){
        mx=max(mx,it->second);
    }

    for(i=0;i<n;i++){
        if( newmap.find(name[i])!=newmap.end() ) newmap[name[i]]+=pnt[i];
        else newmap[name[i]]=pnt[i];
        if(newmap[name[i]]>=mx and mp[name[i]]==mx) {cout<<name[i]; return 0;}
    }

return 0;

}