#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,i,j,tmp,tmp2;
    cin>>n>>tmp;

    for(i=1;i<n;i++)
    {
        cin>>tmp2;
        if(tmp==tmp2)
        {

            for(i=i+1;i<n;i++)
            {
                cin>>tmp2;

                if(tmp>tmp2)
                {
                    tmp=tmp2;
                    for(i=i+1;i<n;i++)
                    {
                        cin>>tmp2;
                        if(tmp<=tmp2)
                        {
                            cout<<"NO"<<endl;
                            return 0;
                        }
                        tmp=tmp2;
                    }

                }
                else if(tmp<tmp2)
                        {
                            cout<<"NO"<<endl;
                            return 0;
                        }

            }

        }
        else if(tmp>tmp2)
        {
            tmp=tmp2;
            for(i=i+1;i<n;i++)
            {
                cin>>tmp2;
                if(tmp<=tmp2)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                tmp=tmp2;
            }

        }

        tmp=tmp2;
    }

cout<<"YES"<<endl;

	return 0;
}
