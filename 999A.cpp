#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,i,tmp,flag=0,cnt=0;

    cin>>n>>k;

    vector<int>vec;
    vector<int>::iterator it;

    for(i=1;i<=n;i++)
    {
        cin>>tmp;

        if(flag==1){
            vec.push_back(tmp);
            continue ;
        }

        if(tmp<=k)
            cnt++;
        else
            flag=1;

    }

    while( !vec.empty() && vec.back()<=k)
    {
        cnt++;
        vec.pop_back();
    }

    cout<<cnt<<endl;



    return 0;


}
