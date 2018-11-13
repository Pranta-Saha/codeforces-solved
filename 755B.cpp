
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,p,comon=0,e;
    set<string >stp,ste;
    set<string >::iterator it;
    string str;

    cin>>n>>m;
    while(n--) { cin>>str; stp.insert(str);}
    while(m--) { cin>>str; ste.insert(str);}

    for(it=ste.begin();it!=ste.end();it++)
        if(stp.find(*it)!=stp.end())
            comon++;

    p=stp.size(); e=ste.size();

    if(comon&1) { p-=(comon/2); e-=((comon/2)+1);  }
    else { p-=(comon/2); e-=(comon/2);   }

    if(p>e) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

	return 0;
}
