
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp;
    set<int >st;
    set<int >::iterator it,it2,it3;
    cin>>n;
    while(n--)
    {
          cin>>tmp;
          st.insert(tmp);
    }


    it=st.begin();

    if(st.size()<=2)
        {cout<<"YES"; return 0;}
    else if(st.size()==3)
    {
        it2=it; it2++;
        it3=it2; it3++;
        if(*it2-*it==*it3-*it2)
            {cout<<"YES"; return 0;}
    }
     cout<<"NO";
	return 0;
}
